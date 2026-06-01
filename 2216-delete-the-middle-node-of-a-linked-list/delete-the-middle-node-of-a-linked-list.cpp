class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

         if (head == nullptr || head->next == nullptr)
            return nullptr;

        ListNode* prev=head;

        int count=0;
        while(prev!=NULL){
            count++;
            prev=prev->next;
        }
prev=head;
        for(int i=0;i<count/2-1;i++){
           prev=prev->next;
        }

       prev->next=prev->next->next;

        return head;
    }
};