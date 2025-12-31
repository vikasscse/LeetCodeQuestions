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

    void findsum(TreeNode*root,long long &sum,long long num)
    {
        if(!root) return;
        num=num*2+root->val;

        if(root->left==nullptr && root->right==nullptr)
        {
            sum+=num;
            return;
        }

        findsum(root->left,sum,num);
        findsum(root->right,sum,num);
    }
    int sumRootToLeaf(TreeNode* root) {
        long long sum=0;
        long long num=0;
        findsum(root,sum,num);
        return sum;
    }
};