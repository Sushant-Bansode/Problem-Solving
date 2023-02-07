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
    // if list1 happen to be NULL, we will simply return list2.
        if(list1 == NULL){
            return list2;  
        }	
	// if list2 happen to be NULL, we will simply return list1.
        if(list2 == NULL){
           return list1; 
        }
        
       ListNode * ptr = list1;
        if(list1 -> val > list2 -> val)
        {
            ptr = list2;
            list2 = list2 -> next;
        }
        else
        {
            list1 = list1 -> next;
        }
        ListNode *curr = ptr;
        
		// till one of the list doesn't reaches NULL
        while(list1 &&  list2)
        {
            if(list1 -> val < list2 -> val){
                ListNode* nn = new ListNode;
                nn -> val = list1 -> val;
                curr->next = nn;
                curr = nn;
                list1 = list1 -> next;
            }
            else{
               ListNode* nn = new ListNode;
                nn -> val = list2 -> val;
                curr->next = nn;
                curr = nn;
                list2 = list2 -> next;
            }
        
        }
		
		// adding remaining elements of bigger list.
        while(list1){
             ListNode* nn = new ListNode;
                nn -> val = list1 -> val;
                curr->next = nn;
                curr = nn;
                list1 = list1 -> next;
           
        }
           
        while(list2){
             ListNode* nn = new ListNode;
                nn -> val = list2 -> val;
                curr->next = nn;
                curr = nn;
                list2 = list2 -> next;
            
        }    
        return ptr;
       
    }
};