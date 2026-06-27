// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;

//         if (root == nullptr)
//             return ans;

//         stack<TreeNode*> st;
//         st.push(root);

//         while (!st.empty()) {
//             TreeNode* node = st.top();
//             st.pop();

//             ans.push_back(node->val);

//             if (node->right)
//                 st.push(node->right);

//             if (node->left)
//                 st.push(node->left);
//         }

//         return ans;
//     }
// };

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* curr = root;

        while (curr || !st.empty()) {
            while (curr) {
                ans.push_back(curr->val);
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            
            curr = curr->right;
        }
        return ans;
    }
};

