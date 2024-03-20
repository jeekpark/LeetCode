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
int val;
class Solution {
public:

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        if(!head || !head->next) return head;
        ListNode* cur = head;
        while (cur->next)
        {
            val = __gcd(cur->val, cur->next->val);
            ListNode* temp = new ListNode(val, cur->next);
            cur->next = temp;
            cur = temp->next;
        }
        return head;
    }
};