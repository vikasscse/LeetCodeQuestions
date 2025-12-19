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
    int height(TreeNode* root,bool&ans) {
        if (root == NULL)
            return 0;

        int leftHeight = height(root->left,ans);
        int rightHeight = height(root->right,ans);

        if (abs(leftHeight - rightHeight) > 1) ans=0;
        
        return 1 + max(leftHeight, rightHeight);
    }

    bool isBalanced(TreeNode* root) {
        bool ans=1;
        height(root,ans);
        return ans;

    }
};
