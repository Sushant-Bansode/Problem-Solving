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
    ListNode* insertionSortList(ListNode* head) {
       if(!head || !head->next) return head;
        ListNode *start = new ListNode(INT_MIN), *curr = head -> next;
        start -> next = head;
        ListNode *prev = head;
        while(curr) {
            if(curr -> val < prev -> val) {
                ListNode *now = curr, *temp = start;
                curr = curr -> next;
                while(temp -> next -> val < now -> val) temp = temp -> next;
                ListNode *next = temp -> next;
                temp -> next = now;
                now -> next = next;
                prev -> next = curr;
            }else {
                prev = curr;
                curr = curr -> next;
            }
        }
        prev -> next = nullptr;
        return start -> next;
    }
};