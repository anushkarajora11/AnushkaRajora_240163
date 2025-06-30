#include<iostream>
#include<vector>
#include<stack>

using namespace std;
struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
vector<int> inorderTraversal(TreeNode* A) {
    vector <int> answer;
    stack<TreeNode*> st;
    TreeNode* current = A;
    
    while (current!= NULL||!st.empty()){
        while(current!= NULL){
            st.push(current);
            current = current->left;
            
        }
        current = st.top();
        st.pop();
        
        answer.push_back(current->val);
        current = current->right;
        
    }
    return answer;
}
