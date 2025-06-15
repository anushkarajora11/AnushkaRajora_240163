#include<iostream>
using namespace std;

//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 class Solution{
    public:
 
 
ListNode* deleteDuplicates(ListNode* A) {
    ListNode* current = A;

    while (current != NULL && current->next != NULL) {
        if (current->val == current->next->val) {
            ListNode* temp = current->next;
            current->next = current->next->next;
            delete temp;
        } else {
            current = current->next;
        }
    }

    return A;
}
 };