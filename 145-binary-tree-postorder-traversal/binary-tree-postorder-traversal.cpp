// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:

//     void postorder(TreeNode* root, vector<int>& ans){
//         if(root == NULL) return;

//         postorder(root->left, ans); // Left
//         postorder(root->right, ans); // Right
//                 ans.push_back(root->val); // Root

//     }
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int>ans;
//    postorder(root, ans);
//    return ans;

//     }
// };

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;

        if (root == nullptr)
            return ans;

        stack<TreeNode*> st1, st2;

        st1.push(root);

        while (!st1.empty()) {
            TreeNode* node = st1.top();
            st1.pop();

            st2.push(node);

            if (node->left)
                st1.push(node->left);

            if (node->right)
                st1.push(node->right);
        }

        while (!st2.empty()) {
            ans.push_back(st2.top()->val);
            st2.pop();
        }

        return ans;
    }
};