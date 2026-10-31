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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev=nullptr;

        for(int i=0; i<n; i++)
        {
            fast=fast->next;
        }

        while(fast != nullptr)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }

        if(prev == nullptr)
        {
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;

        }

        prev->next=slow->next;
        slow->next=nullptr;
        delete slow;

        return head;

    }
};