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
        ListNode* temp=head;
       ListNode* prev=NULL;
       int c=0;
       while(temp!=NULL) {
           c++;
           temp=temp->next;
       }
       if(n==c)return head->next;
       if(c==1 || c==0)return NULL;
       int d=c-n;
       c=0;
       temp=head;
       while(c!=d){
           prev=temp;
temp=temp->next;
c++;
if(c==d){
prev->next=temp->next;

}
       }
       return head;
    }
};