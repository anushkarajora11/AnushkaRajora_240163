class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, best = 0;

        for (int j = 0; j < nums.size(); j++) {
            while (nums[j] - nums[i] > 1) i++;
            if (nums[j] - nums[i] == 1) {
                best = max(best, j - i + 1);
            }
        }
        return best;
    }
};
