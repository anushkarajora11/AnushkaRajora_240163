class Solution {
public:
    int strStr(string haystack, string needle) {

        if (haystack.find(needle) != string::npos) {
            int index = haystack.find(needle);
            return index;
        }

        return -1;
    }
};
