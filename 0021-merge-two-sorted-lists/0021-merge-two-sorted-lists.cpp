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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         if (!list1)
    {
        return list2;
    }
    if (!list2)
    {
        return list1;
    }

    ListNode *current1 = list1;
    ListNode *current2 = list2;
    ListNode *head3 = nullptr;
    ListNode *current3 = nullptr;

    while (current1 && current2)
    {
        ListNode *newNode = nullptr;

        if (current1->val <= current2->val)
        {
            newNode = current1;
            current1 = current1->next;
        }
        else
        {
            newNode = current2;
            current2 = current2->next;
        }

        if (current3 == nullptr)
        {
            head3 = newNode;
            current3 = head3;
        }

        else
        {
           current3->next=newNode;
           current3=current3->next;
        }
    }
    if(current1){
        current3->next=current1;
    }
    if(current2){
        current3->next=current2;
    }



    return head3;
    }
};