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
    ListNode* oddEvenList(ListNode* head) {
        if (head==NULL || head->next==NULL || head->next->next==NULL)
        return head;
        
        ListNode* oddHead= head;
        ListNode* oddTail= head;
        ListNode* evenHead= head->next;
        ListNode* evenTail= evenHead;
        
        head= head->next->next;
        
        while(head != NULL){
            oddTail->next= head;
            oddTail= oddTail->next;
            head= head->next;
            if (head != NULL){
                evenTail->next = head;
                evenTail= evenTail->next;
                head= head->next;
            }
        }
        
        evenTail->next= NULL;
        oddTail->next= evenHead;
        return oddHead;
    }
};