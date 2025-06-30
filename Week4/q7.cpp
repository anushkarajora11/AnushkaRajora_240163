#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreater(vector<int> &A) {
    int n = A.size();
    vector<int> answer(n, -1);
    stack<int> st;
    
    for(int i = n-1; i>=0;i--){
        while(!st.empty() && st.top() <= A[i]){
            st.pop();
            
        }
        if(!st.empty()){
            answer[i]= st.top();
            
        }
        st.push(A[i]);
        
    }
    return answer;
}