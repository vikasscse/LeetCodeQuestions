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
// void PreOrder(TreeNode* root,vector<int>&ans)
// {
//     if(!root) return;
//     ans.push_back(root->val);
//     PreOrder(root->left,ans);
//     PreOrder(root->right,ans);
// }
    vector<int> preorderTraversal(TreeNode* root) {
        // vector<int>ans;
        // PreOrder(root,ans);
        // return ans;
         vector<int>ans;
         if(!root) return ans;
        stack<TreeNode*>s;
        s.push(root);
        TreeNode*temp;

        while(!s.empty())
        {
            temp=s.top();
            s.pop();
            if(temp->right)
            s.push(temp->right);
            if(temp->left)
            s.push(temp->left);

            ans.push_back(temp->val);

           
        }
        return ans;
    }
};