#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
  string getPermutation(int n, int k) {
       int fact =1;
       vector<int> num;
       for(int i=1;i<n;i++){
        fact *= i;
        num.push_back(i);
       } 
       num.push_back(n);
       string  answer = "";
       k=k-1;
       while(true ){
        answer = answer + to_string(num[k/fact]);
        num.erase(num.begin()+ k/fact);
        if(num.size() == 0){
            break;
        }
        k= k%fact;
        fact = fact/num.size();

       }
       return answer;
    }
};