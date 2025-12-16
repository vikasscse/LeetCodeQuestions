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

    void Inorder(TreeNode*root,long long&prev,bool &ans)
    {
        if(!root || !ans) return;
        Inorder(root->left,prev,ans);
        if(prev>=root->val)
        {
            ans=0;
            return;
        }
        prev=root->val;
        Inorder(root->right,prev,ans);
    }
    bool isValidBST(TreeNode* root) {
        long long prev=LLONG_MIN;
        bool ans=1;
        Inorder(root,prev,ans);
        return ans; 
    }
};