#include<iostream>
#include<vector>
#include<stack>

using namespace std;
int evalRPN(vector<string> &A) {
    stack<int> st;

    for (const string& token : A) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
            else if (token == "/") st.push(a / b); 
        } else {
            st.push(stoi(token));  
        }
    }

    return st.top();
}
