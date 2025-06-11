#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int count_distinct(vector<int> &A, int K) {
    unordered_map<int, int> freq;
    int left = 0, right = 0, count = 0;

    for (; right < A.size(); ++right) {
        if (++freq[A[right]] == 1)
            K--;

        while (K < 0) {
            if (--freq[A[left]] == 0)
                K++;
            left++;
        }
        count += right - left + 1;
    }
    return count;
}

int solve(vector<int> &A, int B) {
    return count_distinct(A, B) - count_distinct(A, B - 1);
}