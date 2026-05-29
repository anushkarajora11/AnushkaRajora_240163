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
    void flatten(TreeNode* root) {
        TreeNode* prev = root;

        while (prev != NULL) {
            if (prev->left != NULL) {
                TreeNode* temp = prev->right;

                prev->right = prev->left;
                prev->left = NULL;

                TreeNode* curr = prev->right;
                while (curr->right != NULL) {
                    curr = curr->right;
                }

                curr->right = temp;
            }

            prev = prev->right;
        }
    }
};