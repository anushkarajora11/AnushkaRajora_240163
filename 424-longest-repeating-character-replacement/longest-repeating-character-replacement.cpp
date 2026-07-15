class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26] = {0};
        int i = 0;
        int j = 0;
        int ans = 0;
        int maxFreq = 0;

        while (j < s.length()) {
            count[s[j] - 'A']++;

            maxFreq = max(maxFreq, count[s[j] - 'A']);

            while ((j - i + 1) - maxFreq > k) {
                count[s[i] - 'A']--;
                i++;
            }

            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};