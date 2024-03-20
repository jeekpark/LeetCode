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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* aPrevNode = list1;
        for (int i = 0; i < a - 1; ++i)
            aPrevNode = aPrevNode->next;
        ListNode* bNode = aPrevNode->next;
        for (int i = a; i < b; ++i)
            bNode = bNode->next;
        aPrevNode->next = list2;
        while (list2->next)
            list2 = list2->next;
        list2->next = bNode->next;
        return list1;
    }
};