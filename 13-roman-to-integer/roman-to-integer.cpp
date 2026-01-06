class Solution {
public:
    int romanToInt(string s) {
        int result = 0;

        for(int i = 0; i < s.length(); i++) {

            if(s[i] == 'I') result += 1;
            if(s[i] == 'V') result += 5;
            if(s[i] == 'X') result += 10;
            if(s[i] == 'L') result += 50;
            if(s[i] == 'C') result += 100;
            if(s[i] == 'M') result += 1000;
             if(s[i] == 'D') result += 500;

            if(i > 0 && s[i] == 'V' && s[i-1] == 'I') result -= 2;
            if(i > 0 && s[i] == 'X' && s[i-1] == 'I') result -= 2;
            if(i > 0 && s[i] == 'L' && s[i-1] == 'X') result -= 20;
            if(i > 0 && s[i] == 'C' && s[i-1] == 'X') result -= 20;
            if(i > 0 && s[i] == 'D' && s[i-1] == 'C') result -= 200;
            if(i > 0 && s[i] == 'M' && s[i-1] == 'C') result -= 200;
        }

        return result;
    }
};
