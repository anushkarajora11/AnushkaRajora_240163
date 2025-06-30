#include<iostream>
#include<vector>
using namespace std;
 struct TreeNode {
    int val;    
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
TreeNode* getSuccessor(TreeNode* A, int B) {
    TreeNode* successor = NULL;
    
    while( A != NULL){
        if(A->val > B){
            successor = A;
            A= A->left;
            
            
        }
        else{
            A= A->right;
            
        }
    }
    return successor;
    
}