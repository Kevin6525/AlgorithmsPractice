// https://leetcode.com/problems/palindrome-linked-list/ (E)
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
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        slow = reversed(slow);
        fast = head;
        while(slow != NULL)
        {
            if(slow->val != fast->val)
            {
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
    ListNode* reversed(ListNode* rev)
    {
        ListNode* prev = NULL;
        while(rev != NULL)
        {
            ListNode* ptr = rev->next;
            rev->next = prev;
            prev = rev;
            rev = ptr;
        }
        return prev;
    }
};
