struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* temp = head;
    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;

    while (temp != NULL) {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }

    return prev;
}