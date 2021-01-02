// https://leetcode.com/problems/reverse-linked-list/submissions/ (E)
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
    ListNode* reverseList(ListNode* head) {
        ListNode *rev = NULL;
        while(head != NULL)
        {
            ListNode *itr = head->next;
            head->next = rev;
            rev = head;
            head = itr;
        }
        return rev;
    }
};
