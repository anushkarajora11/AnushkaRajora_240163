#include <vector>
#include <algorithm>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size();
    int left = 0, right = 0;
    long long sum = 0;
    int max_len = 0;

    while (right < n) {
        sum += a[right];

        while (sum > k && left <= right) {
            sum -= a[left];
            left++;
        }

        if (sum == k) {
            max_len = max(max_len, right - left + 1);
        }

        right++;
    }

    return max_len;
}