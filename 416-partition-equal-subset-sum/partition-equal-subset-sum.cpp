class Solution {
public:
    bool solve(int ind, int target, vector<int>& nums, vector<vector<int>>& dp) {
        if (target == 0)
            return true;

        if (ind == nums.size())
            return false;

        if (dp[ind][target] != -1)
            return dp[ind][target];

        bool notTake = solve(ind + 1, target, nums, dp);

        bool take = false;
        if (nums[ind] <= target)
            take = solve(ind + 1, target - nums[ind], nums, dp);

        return dp[ind][target] = take || notTake;
    }

    bool canPartition(vector<int>& nums) {
        int sum = 0;

        for (int x : nums)
            sum += x;

        if (sum % 2 != 0)
            return false;

        int target = sum / 2;

        vector<vector<int>> dp(nums.size(), vector<int>(target + 1, -1));

        return solve(0, target, nums, dp);
    }
};