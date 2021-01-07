/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// This is self explanatory, we just set the node "head" to the children
// It isn't the actual head, but the node to be deleted
class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *node->next;
    }
};
