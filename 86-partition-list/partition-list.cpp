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
    ListNode* partition(ListNode* head, int x) {

        ListNode smallDummy(0);
        ListNode largeDummy(0);

        ListNode* small = &smallDummy;
        ListNode* large = &largeDummy;

        ListNode* prev = head;

        while(prev != NULL){

            if(prev->val < x){
                small->next = prev;
                small = small->next;
            }
            else{
                large->next = prev;
                large = large->next;
            }

            prev = prev->next;
        }

        large->next = NULL;

        small->next = largeDummy.next;

        return smallDummy.next;
    }
};