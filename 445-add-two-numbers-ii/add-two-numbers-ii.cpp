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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*prev1=nullptr;
        ListNode*prev2=nullptr;
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;

        while(curr1!=NULL)
        {
            ListNode* nextNode1 = curr1->next;
            curr1->next = prev1;
            prev1 = curr1;
            curr1 = nextNode1;
        }
        while(curr2 != NULL)
        {
            ListNode* nextNode2 = curr2->next;
            curr2->next = prev2;
            prev2 = curr2;
            curr2 = nextNode2;
        }
        ListNode*temp1=prev1;
        ListNode*temp2=prev2;

        int carry=0;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while(temp1 || temp2 || carry)
        {
            int sum=carry;
            if(temp1!=NULL)
            {
                sum+=temp1->val;
                temp1=temp1->next;
            }
            if(temp2!=NULL)
            {
                sum+=temp2->val;
                temp2=temp2->next;
            }
            carry=sum/10;
            int data=sum%10;
            ListNode* newNode = new ListNode(data);
            temp->next=newNode;
            temp=temp->next;
        }

        ListNode* curr3 = dummy->next;
        ListNode*prev3=nullptr;
        while(curr3!=NULL)
        {
            ListNode* nextNode3 = curr3->next;
            curr3->next = prev3;
            prev3 = curr3;
            curr3 = nextNode3;
        }
        return prev3;
    }
};