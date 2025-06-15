#include<iostream>
#include<algorithm>
using namespace std;
int pow(int x, int n, int d) {
    long long result = 1;
    long long base = x % d;

    if (base < 0) base += d;

    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * base) % d;
        }
        base = (base * base) % d;
        n = n / 2;
    }

    return (result + d) % d;
};
