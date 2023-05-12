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
class Solution
{
public:
    void solve(ListNode *head, ListNode *next){
        if (head->next == NULL || head->next->next == NULL)  return;

        ListNode *temp = head;
        ListNode *prev;
        while (temp->next){
            prev = temp;
            temp = temp->next;
        }

        next = head->next;
        head->next = temp;
        temp->next = next;
        head = temp;
        prev->next = NULL;
        solve(head->next, next);
    }
    void reorderList(ListNode *head){
        ListNode *temp = head;
        ListNode *next = NULL;
        solve(temp, next);
    }
};