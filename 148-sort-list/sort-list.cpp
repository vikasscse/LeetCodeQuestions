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

    ListNode*mergeSort(ListNode*ptr1,ListNode*ptr2)
    {
        ListNode dummy(0);
        ListNode*temp=&dummy;
        while(ptr1 && ptr2)
        {
            if(ptr1->val < ptr2->val)
            {
                temp->next=ptr1;
                ptr1=ptr1->next;
            }
            else
            {
                temp->next=ptr2;
                ptr2=ptr2->next;
            }
            temp=temp->next;

            if(ptr1) {
                temp->next=ptr1;
            }
            if(ptr2) {
                temp->next=ptr2;
            }
        }
        return dummy.next;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)
        return head;

        ListNode*slow=head;
        ListNode*fast=head->next;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*mid=slow->next;
        slow->next=nullptr;
        ListNode*left=sortList(head);
        ListNode*right=sortList(mid);
        return mergeSort(left,right);
    }
};