class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        int i = 0;

        while (i < s.length()) {
            if ((s[i] >= 'A' && s[i] <= 'Z') ||
                (s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= '0' && s[i] <= '9')) {

                if (s[i] >= 'A' && s[i] <= 'Z') {
                    ans.push_back(s[i] + 32);
                } else {
                    ans.push_back(s[i]);
                }
            }
            i++;
        }

        for (int k = 0; k < ans.length() / 2; k++) {
            if (ans[k] != ans[ans.length() - 1 - k]) {
                return false;
            }
        }
        return true;
    }
};
