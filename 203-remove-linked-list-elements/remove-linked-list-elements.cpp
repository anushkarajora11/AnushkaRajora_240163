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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* tail = &dummy;
        while (head != NULL) {
            if (head->val == val) {
                tail->next = head->next;   // remove
            } else {
                tail = head;               // keep node, move tail
            }
            head = head->next;             // always move head
        }

        return dummy.next;
    }
};
