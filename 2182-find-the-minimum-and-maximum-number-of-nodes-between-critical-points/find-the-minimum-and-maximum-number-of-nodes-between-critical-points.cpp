/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode*prev=head;
        ListNode*curr=prev->next;
        ListNode*next1=curr->next;
        int count=2;
        vector<int>ans;

        while(next1!=nullptr)
        {
            if(curr->val>prev->val && curr->val>next1->val)
            {
                ans.push_back(count);
                count++;
                prev=curr;
                curr=next1;
                next1=next1->next;
            }
            else if(curr->val<prev->val && curr->val<next1->val)
            {
                ans.push_back(count);
                count++;
                prev=curr;
                curr=next1;
                next1=next1->next;
            }
            else
            {
                count++;
                prev=curr;
                curr=next1;
                next1=next1->next;
            }
        }
        int maxi=INT_MIN;
        int mini=INT_MAX;

        if(ans.size()<2)
        return {-1,-1};

        for(int i=0;i<ans.size();i++)
        {
            maxi=max(maxi,ans[i]);
            mini=min(mini,ans[i]);
        }
        int secondAns=maxi-mini;

        int firstAns=INT_MAX;
        for(int i=1;i<ans.size();i++)
        {
            firstAns=min(firstAns,ans[i]-ans[i-1]);
        }
        return {firstAns,secondAns};
    
    }
};