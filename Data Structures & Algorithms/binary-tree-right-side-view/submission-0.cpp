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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> v;
        if(root==nullptr)
        return v;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            while(n){
                TreeNode* ele=q.front();
                q.pop();
                if(ele->left)
                q.push(ele->left);
                if(ele->right)
                q.push(ele->right);
                if(n==1)
                v.push_back(ele->val);
                n--;
            }

        }
        return v;

    }
};
