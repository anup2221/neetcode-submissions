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
    int max_dai=0; 
    int height(TreeNode* root){
        if (root==nullptr)
        return 0;
        max_dai=max(max_dai, height(root->left)+ height(root->right));
        return 1+max(height(root->left),height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // if (root==nullptr)
        // return 0;
        // max_dai=max(max_dai, diameterOfBinaryTree(root->left)+ diameterOfBinaryTree(root->right));
        // return 1+max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right));
        height(root);
        return max_dai;
        
    }
};
