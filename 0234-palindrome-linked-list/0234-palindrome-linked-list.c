
struct ListNode* reverse(struct ListNode* head){
    struct ListNode *prev = NULL, *curr = head, *next = NULL;

    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(struct ListNode* head) {
    if(head == NULL || head->next == NULL)
        return true;

    struct ListNode *slow = head, *fast = head;

    // find middle
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    // reverse second half
    struct ListNode *second = reverse(slow);
    struct ListNode *first = head;

    // compare
    while(second){
        if(first->val != second->val)
            return false;
        first = first->next;
        second = second->next;
    }

    return true;
}