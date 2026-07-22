class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        vector<string> v(numRows);
        int i = 0;

        while (i < s.size()) {

            for (int row = 0; row < numRows && i < s.size(); row++) {
                v[row] += s[i++];
            }

            for (int row = numRows - 2; row > 0 && i < s.size(); row--) {
                v[row] += s[i++];
            }
        }

        string ans = "";

        for (string x : v) {
            ans += x;
        }

        return ans;
    }
};