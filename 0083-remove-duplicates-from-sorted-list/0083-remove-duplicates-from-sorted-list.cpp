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
ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL){
        return NULL;
    }
     ListNode * curr1 = head;      
     set<int> st;
      while(curr1){
       st.insert(curr1 -> val);
       curr1 = curr1 -> next;   
      }
     ListNode* curr = head;
     ListNode* prev = curr;
    for(auto x: st){
        curr-> val = x;
        prev = curr;
       curr = curr-> next; 
    }
  prev -> next = NULL;  
 return head;    
    }
};