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
    ListNode* partition(ListNode* head, int pivot) {
   ListNode* temp = head; 
   vector<int> less, great;
    while(temp){
        if(temp-> val < pivot){
            less.push_back(temp->val);
        }else if(temp->val >= pivot){
            great.push_back(temp->val);
        }
     temp = temp -> next;   
    }
ListNode* ansHead = new ListNode; 
ListNode* templess = ansHead;        
for(auto x: less){
 ListNode* newnode = new ListNode;
 newnode -> next = NULL;
  newnode -> val = x;   
if(templess == NULL){
 templess -> next = newnode;
}else{
 templess -> next = newnode;
 templess = templess -> next;    
}    
  }
               
for(auto x: great){
 ListNode* newnode = new ListNode;
 newnode -> next = NULL;
  newnode -> val = x;   
 templess -> next = newnode;
 templess = templess -> next;    
}    
    
ansHead = ansHead-> next;
return ansHead;        
    }
};

