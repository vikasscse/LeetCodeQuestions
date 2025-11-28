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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return true;
        ListNode*first=head,*second=head;
        int count=0;
        while(first){
            count++;
            first=first->next;
        }
        int count_first=(count+1)/2-1;
        
        while(count_first--){
            second=second->next;
        }
        first=second->next;
        second->next=NULL;
        ListNode*prev=NULL;
        while(first){
            ListNode*Next=first->next;
            first->next=prev;
            prev=first;
            first=Next;
        }
        second=head;
        first=prev;
        while(first){
        if(first->val!=second->val){
            return 0;
        }
         first=first->next;
        second=second->next;
     }
        return 1;
    }
};