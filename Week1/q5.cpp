#include<iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isBalanced(string s) {
        
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;

                char top = st.top();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
int main(){
    Solution q5;
    char str[50];
    fgets(str,50 , stdin);
    puts(str);
    if(q5.isBalanced(str)){
        cout<<"false"<<endl;
    }else{
        cout<<"true"<<endl;
    }



  return 0;
}
