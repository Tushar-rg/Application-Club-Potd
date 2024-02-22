#include <unistd.h>
class Solution {
public:
    bool isPalindrome(ListNode* head){
        usleep(35000);
        if(head == NULL || head->next == NULL)
            return (head);
        ListNode *revHead = NULL;
        ListNode *ptr = head;
        while(ptr!=NULL){
            ListNode *temp = new ListNode(ptr->val);
            temp->next = revHead;
            revHead = temp;
            ptr = ptr->next;
        }
        while(head && revHead){
            if(head->val != revHead->val)
                return false;
            head = head->next;
            revHead = revHead->next;
        }
        return true;
    }
};