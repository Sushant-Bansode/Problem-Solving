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
     map<int,int> mp;
      while(curr1){
       mp[curr1 -> val]++;
       curr1 = curr1 -> next;   
      }
   ListNode* ptr = new ListNode;
   ptr -> val = -250;
   ListNode* curr = ptr; 
   for(auto x: mp){
       if(x.second == 1){
         if(curr->val == -250){
         curr-> val = x.first;
         }
         else{
            ListNode* nn = new ListNode;
            nn -> val = x.first;
            curr-> next = nn;
            curr = nn; 
         }    
       }
   }
 if(ptr-> val == -250){
return NULL;  
  }else{
 return ptr;       
  }  
      
    }
};