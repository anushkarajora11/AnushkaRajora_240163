class Solution {
public:

    int sumcal(vector<int>& nums, int left, int right) {
        int sum = 0;

        for(int i = left; i < right; i++) {
            sum += nums[i];
        }

        return sum;
    }

    int pivotIndex(vector<int>& nums) {
        int i = 0;

        while(i < nums.size()) {

            int leftsum = sumcal(nums, 0, i);
            int rightsum = sumcal(nums, i + 1, nums.size());

            if(leftsum == rightsum) {
                return i;
            }

            i++;
        }

        return -1;
    }
};