class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int x : nums)
            mp[x]++;

        vector<vector<int>> bucket(nums.size() + 1);

        for(auto &p : mp)
            bucket[p.second].push_back(p.first);

        vector<int> ans;

        for(int i = nums.size(); i >= 1; i--) {
            for(int x : bucket[i]) {
                ans.push_back(x);
                if(ans.size() == k)
                    return ans;
            }
        }

        return ans;
    }
};