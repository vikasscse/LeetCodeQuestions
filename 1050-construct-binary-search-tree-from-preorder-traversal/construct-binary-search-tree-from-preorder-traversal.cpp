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

    TreeNode*find(vector<int>& preorder,int min,int max,int &index)
    {
        if(index>=preorder.size() || preorder[index]>max || preorder[index]<min)
        {
            return NULL;
        }
        TreeNode * root=new TreeNode;
        root->val=preorder[index];
        index++;

        if(index==preorder.size()) return root;
        
        root->left=find(preorder,min,root->val,index);
        root->right=find(preorder,root->val,max,index);

        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int min=INT_MIN,max=INT_MAX;
        int index=0;
        return find(preorder,min,max,index);
    }
};