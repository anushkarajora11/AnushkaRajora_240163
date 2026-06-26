class Solution {
public:
    int arrangeCoins(int n) {

        int count = 0;
        int req = 1;

        while (n >= req) {
            n -= req;
            count++;
            req++;
        }

        return count;
    }
};