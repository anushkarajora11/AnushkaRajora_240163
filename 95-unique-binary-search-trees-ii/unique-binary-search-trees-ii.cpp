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
    vector<TreeNode*> generateTrees(int n, int start = 1, int end = -1) {
        
        if(end == -1)
            end = n;

        if(start > end)
            return {NULL};

        vector<TreeNode*> ans;

        for(int i = start; i <= end; i++) {

            vector<TreeNode*> left = generateTrees(n, start, i - 1);
            vector<TreeNode*> right = generateTrees(n, i + 1, end);

            for(auto l : left) {
                for(auto r : right) {

                    TreeNode* root = new TreeNode(i);

                    root->left = l;
                    root->right = r;

                    ans.push_back(root);
                }
            }
        }

        return ans;
    }
};