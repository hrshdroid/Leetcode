struct ListNode* merge(struct ListNode* a, struct ListNode* b) {
    struct ListNode dummy;
    dummy.next = NULL;

    struct ListNode* temp = &dummy;

    while (a != NULL && b != NULL) {
        if (a->val <= b->val) {
            temp->next = a;
            a = a->next;
        } else {
            temp->next = b;
            b = b->next;
        }
        temp = temp->next;
    }

    if (a != NULL) temp->next = a;
    else temp->next = b;

    return dummy.next;
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    if (listsSize == 0) return NULL;

    struct ListNode* result = NULL;

    for (int i = 0; i < listsSize; i++) {
        result = merge(result, lists[i]);
    }

    return result;
}