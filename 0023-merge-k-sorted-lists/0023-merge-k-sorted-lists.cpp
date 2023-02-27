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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int, int> mp;
        for(auto& ln : lists){
            while(ln){
                mp[ln->val]++;
                ln = ln->next;
            }
        }
        if(!mp.size())  return nullptr;
        ListNode* ans = new ListNode();
        ListNode* p = ans;
        for(auto& v: mp){
            while(v.second--){
                p->next = new ListNode(v.first);
                p = p->next;
            }
            
        }
        return ans->next;
    }
};