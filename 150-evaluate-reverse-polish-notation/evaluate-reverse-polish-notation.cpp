class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string t : tokens) {
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                if (t == "+") st.push(a + b);
                else if (t == "-") st.push(a - b);
                else if (t == "*") st.push(a * b);
                else st.push(a / b);
            } else {
                int sign = 1, num = 0, i = 0;
                if (t[0] == '-') { sign = -1; i = 1; }
                for (; i < t.size(); i++) num = num * 10 + (t[i] - '0');
                st.push(sign * num);
            }
        }

        return st.top();
         

    }
};
       