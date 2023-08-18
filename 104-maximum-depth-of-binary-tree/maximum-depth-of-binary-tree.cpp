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
    int m=0;
    int helper(TreeNode* root,int c){
        if(root==nullptr){
            return c;
        }
        m=max(helper(root->left,c+1),m);
        m=max(helper(root->right,c+1),m);
        return m;
    }
    int maxDepth(TreeNode* root) {
        return helper(root,0);
    }
};