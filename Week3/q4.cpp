#include<iostream>
#include<algorithm>
using namespace std;

struct ListNode {
    int val;
     ListNode *next;
          ListNode(int x) : val(x), next(NULL) {}
 };
  
 ListNode* getIntersectionNode(ListNode* A, ListNode* B) {
    
    if (!A || !B) return nullptr;

    ListNode* a = A;
    ListNode* b = B;

    while (a != b) {
        a = (a == nullptr) ? B : a->next;
        b = (b == nullptr) ? A : b->next;
    }

    return a;  
}
