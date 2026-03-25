struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    dummy.next = NULL;

    struct ListNode* curr = &dummy;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            curr->next = list1;
            list1 = list1->next;
        } else {
            curr->next = list2;
            list2 = list2->next;
        }
        curr = curr->next;
    }

    while (list1 != NULL) {
        curr->next = list1;
        list1 = list1->next;
        curr = curr->next;
    }

    while (list2 != NULL) {
        curr->next = list2;
        list2 = list2->next;
        curr = curr->next;
    }

    return dummy.next;
}