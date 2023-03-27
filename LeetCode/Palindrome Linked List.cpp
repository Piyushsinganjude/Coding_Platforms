class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head,*fast = head;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast != NULL and fast->next == NULL){
            slow = slow->next;
        }
        ListNode* prev = NULL;
        while(slow and slow->next){
            ListNode* temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        if(slow != NULL){
            slow->next = prev;
        }
        fast = head;
        while(slow and fast)
        {
            if(slow->val != fast->val)
            return false;
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
};
LINK = (https://leetcode.com/problems/palindrome-linked-list/description/)
