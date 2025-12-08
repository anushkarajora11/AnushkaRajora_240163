class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";

        string commonstrs = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(commonstrs) != 0) {
                commonstrs.pop_back();

                if (commonstrs == "")
                    return "";
            }
        }

        return commonstrs;
    }
};
