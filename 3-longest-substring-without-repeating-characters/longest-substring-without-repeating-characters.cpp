class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count[256]={0};
        int i=0;
        int j=0;
        int final = 0;

        while(j<s.length()){
            count[s[j]]++;
            while(count[s[j]]>1){
                count[s[i]]--;
                i++;
            }
            final = max(final , j-i+1);
            j++;
        }
        return final;
    }
};