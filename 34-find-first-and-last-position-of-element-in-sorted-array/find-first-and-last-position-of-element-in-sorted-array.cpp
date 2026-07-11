class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = -1, last = -1;

        // Find first occurrence
        int i = 0, j = n - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;

            if (nums[mid] == target) {
                start = mid;
                j = mid - 1;
            }
            else if (nums[mid] < target) {
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }

        // Find last occurrence
        i = 0;
        j = n - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;

            if (nums[mid] == target) {
                last = mid;
                i = mid + 1;
            }
            else if (nums[mid] < target) {
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }

        return {start, last};
    }
};