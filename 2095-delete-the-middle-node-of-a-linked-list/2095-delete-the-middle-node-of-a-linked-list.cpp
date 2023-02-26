/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */class Solution {

private:
int count(ListNode* head)
{
  ListNode* p = head;
  int cnt = 0;
  while(p != NULL)
  {
      cnt++;
      p = p->next;
  }
  return cnt;
}

public:
    ListNode* deleteMiddle(ListNode* head) {
      if(head == NULL){
        return NULL;
      }
      if(count(head) == 1)
      {
        return NULL;
      }
      if(count(head) == 2)
      {
        head->next = NULL;
        return head;
      }
      int n = count(head);
      ListNode *p = head;
      ListNode *q = head;
      for(int i = 0; i<n/2; i++)
      {
        q = p;
        p = p->next;
      }

      q->next = p->next;
      delete (p);

      return head;
    }
};