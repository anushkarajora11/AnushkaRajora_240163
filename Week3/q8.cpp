#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int kthsmallest(const vector<int> &A, int B) {
    vector<int> temp = A;      
    sort(temp.begin(), temp.end());  
    return temp[B - 1];        
};