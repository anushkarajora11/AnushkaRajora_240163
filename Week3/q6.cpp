#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 ListNode* reverseList(ListNode* A) {
    
        if (A== nullptr || A->next == nullptr)
            return A;

        ListNode* newA = reverseList(A->next);

        A->next->next = A;  
        A->next = nullptr;    

        return newA; 
    
};
