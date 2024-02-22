class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* previous=NULL;
        ListNode* current=head;
        while(current!=NULL){
            ListNode* forward = current->next;
            current->next = previous;
            previous = current;
            current = forward;
        }
        return previous;
    }
};