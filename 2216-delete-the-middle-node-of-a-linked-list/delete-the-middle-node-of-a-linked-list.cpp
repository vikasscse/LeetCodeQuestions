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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return nullptr;
        ListNode*temp=head;
        int count=0;
        while(temp!=nullptr)
        {
            count++;
            temp=temp->next;
        }
        temp=head;
        int mid=count/2;
        while(mid>1)
        {
            temp=temp->next;
            mid--;
        }
        ListNode*del=temp->next;
        temp->next=del->next;
        delete del;

        return head;
    }
};