class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;

        vector<int> arr;
        int temp = x;

        while (temp > 0) {
            arr.push_back(temp % 10);
            temp /= 10;
        }

        int n = arr.size();
        for (int i = 0; i < n / 2; i++) {
            if (arr[i] != arr[n - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};
