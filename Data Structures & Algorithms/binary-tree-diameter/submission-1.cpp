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
        int lh= height(root->left);
        int rh=height(root->right);
        max_dai=max(max_dai, lh+rh);
        return 1+max(lh,rh);
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
