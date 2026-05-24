/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void recoverTree(TreeNode* root) {

        TreeNode* first = NULL;
        TreeNode* second = NULL;
        TreeNode* prev = NULL;

        stack<TreeNode*> st;

        TreeNode* curr = root;

        while(curr != NULL || !st.empty()) {

            while(curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }

            curr = st.top();
            st.pop();

            if(prev != NULL && curr->val < prev->val) {

                if(first == NULL) {
                    first = prev;
                }

                second = curr;
            }

            prev = curr;

            curr = curr->right;
        }

        swap(first->val, second->val);
    }
};