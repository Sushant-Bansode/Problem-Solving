/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL){
            return NULL;
        }if(head->next == head){
            return head;
        }
        ListNode *p = head,*q = head;
        do{
            p = p->next;
            q = q->next->next;
        }while(p != NULL && q!=NULL && q->next != NULL && p != q);
        if(q == NULL || q->next == NULL){
            return NULL;
        }
        p = head;
        while(p != q){
            p = p->next;
            q = q->next;
        }
        return p;
    }
};