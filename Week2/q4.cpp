#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> answer;
        int m = s.size(), n = p.size();
        if (n > m) return answer;

        vector<int> Phash(26,0);
        vector<int> Shash(26,0);

        for (char c : p) {
            Phash[c - 'a']++;
        }


        for (int i = 0; i < n; i++) {
            Shash[s[i] - 'a']++;
        }

        if (Phash == Shash) {
            answer.push_back(0);
        }
        for (int i = 1; i <= m - n; i++) {
            
            Shash[s[i - 1] - 'a']--;
           
            Shash[s[i + n - 1] - 'a']++;

            if (Phash == Shash) {
                answer.push_back(i);
            }
        }

        return answer;
    }
};