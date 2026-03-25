bool hasCycle(struct ListNode *head) {
    struct ListNode *tail = head;
    struct ListNode *temp = head;

    while (tail != NULL && tail->next != NULL) {
        temp = temp->next;
        tail = tail->next->next;

        if (temp == tail) {
            return true;
        }
    }

    return false;
}