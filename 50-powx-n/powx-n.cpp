class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;   
        if (N < 0) {
            x = 1.0 / x;
            N = -N;
        }

        double power = 1.0;

        while (N > 0) {
            if (N % 2 == 1) {
                power *= x;
            }
            x *= x;
            N /= 2;
        }

        return power;
    }
};
