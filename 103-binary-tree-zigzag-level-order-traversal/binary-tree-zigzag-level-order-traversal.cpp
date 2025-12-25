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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            vector<vector<int>>ans;
            int dir=0;
             queue<TreeNode*>q;
            if(!root) return ans;
            q.push(root);
    
        while(!q.empty())
        {
            int size=q.size();
            vector<int>level;
            stack<TreeNode*>s;

            if(dir==0)
            {
                while(size--)
                {
                    TreeNode*temp=q.front();
                    q.pop();
                    
                    if(temp->left)
                    s.push(temp->left);

                    if(temp->right)
                    s.push(temp->right);

                    level.push_back(temp->val);

                }
                dir=1;
                
            }
            
            else
            {
                while(size--)
                {
                    TreeNode*temp=q.front();
                    q.pop();

                    if(temp->right)
                    s.push(temp->right);
                        
                    if(temp->left)
                    s.push(temp->left);

                    level.push_back(temp->val);

                }
                dir=0;
            }

             while(!s.empty())
                {
                    q.push(s.top());
                    s.pop();
                }
            ans.push_back(level);
            
        } 
        return ans; 
    }
};