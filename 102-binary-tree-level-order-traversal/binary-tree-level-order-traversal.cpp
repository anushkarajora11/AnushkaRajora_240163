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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == NULL) return ans;

        vector<TreeNode*> v;
        v.push_back(root);

        int front = 0;

        while (front < v.size()) {
            int levelSize = v.size() - front;
            vector<int> level;

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = v[front++];

                level.push_back(node->val);

                if (node->left) v.push_back(node->left);
                if (node->right) v.push_back(node->right);
            }

            ans.push_back(level);
        }

        return ans;
    }
};