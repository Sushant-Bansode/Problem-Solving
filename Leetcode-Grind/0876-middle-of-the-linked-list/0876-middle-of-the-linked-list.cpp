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
    ListNode* middleNode(ListNode* head) {
      ListNode* temp = head;
      ListNode* ans = head;  
        int n = 0;
      while(temp){
          temp = temp->next;
          n++;
      }  
     n = n/2;
  while(n--){
      ans = ans->next;
  } 
    return ans;    
    }
};