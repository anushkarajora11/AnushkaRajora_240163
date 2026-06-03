class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         int sum = 0;

        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int maxi = sum;

        for(int i = k; i < nums.size(); i++) {
            sum += nums[i];
            sum -= nums[i - k];

            maxi = max(maxi, sum);
        }

        return (double)maxi/k;
    }
};

// class Solution {
// public:
//     int maxSubarraySum(vector<int>& arr, int k) {

//         int sum = 0;

//         for(int i = 0; i < k; i++) {
//             sum += arr[i];
//         }

//         int maxi = sum;

//         for(int i = k; i < arr.size(); i++) {
//             sum += arr[i];
//             sum -= arr[i - k];

//             maxi = max(maxi, sum);
//         }

//         return maxi;
//     }
// };