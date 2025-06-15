#include<iostream>
using namespace std;
struct ListNode {
     int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 ListNode* solve(ListNode* A) {
    if (!A || !A->next) return A;

    ListNode* evenHead = NULL;
    ListNode* curr = A;
    while (curr && curr->next) {
        ListNode* even = curr->next;
        curr->next = even->next;
        even->next = evenHead;
        evenHead = even;
        if (curr->next) curr = curr->next;
    }
    curr = A;
    while (evenHead) {
        ListNode* tempOddNext = curr->next;
        ListNode* tempEvenNext = evenHead->next;

        curr->next = evenHead;
        evenHead->next = tempOddNext;

        curr = tempOddNext;
        evenHead = tempEvenNext;
    }

    return A;
}
