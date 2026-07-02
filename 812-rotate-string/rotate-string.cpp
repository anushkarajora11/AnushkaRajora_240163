class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.size() != goal.size())
            return false;

        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s == goal)
                return true;

            char ch = s[0];
            s.erase(s.begin());
            s.push_back(ch);
        }

        return false;
    }
};