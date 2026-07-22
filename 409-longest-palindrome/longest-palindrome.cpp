class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(char ch : s){
            mp[ch]++;
        }
int ans=0;
bool odd=false;
        for(auto x:mp){
            if(x.second%2==0){
                ans+=x.second;
            }
            else{
                ans+=x.second-1;
                odd=true;
            }

        }
        if(odd){
            ans++;
        }
        return ans;
    }
};