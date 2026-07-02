class Solution {
public:
    string reverseWords(string s) {
        string t = "";
        string word = "";

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                word = s[i] + word;
            } else {
                if (!word.empty()) {
                    if (!t.empty())
                        t += " ";
                    t += word;
                    word = "";
                }
            }
        }

        if (!word.empty()) {
            if (!t.empty())
                t += " ";
            t += word;
        }

        return t;
    }
};