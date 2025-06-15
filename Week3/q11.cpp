#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void all_subsets(vector<int>& nums, vector<int>& total_subset, int index, vector<vector<int>>& result) {
        result.push_back(total_subset);

        for (int i = index; i < nums.size(); ++i) {
            if ( index<i && nums[i] == nums[i - 1]) continue;

            total_subset.push_back(nums[i]);
            all_subsets(nums,  total_subset, i + 1, result);
            total_subset.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        vector<int> total_subsets;
        all_subsets(nums, total_subsets, 0, result);
        return result;
    }
};

