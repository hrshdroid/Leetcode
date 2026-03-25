struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *tempA = headA;
    struct ListNode *tempB = headB;

    while (tempA != tempB) {
        if (tempA == NULL) tempA = headB;
        else tempA = tempA->next;

        if (tempB == NULL) tempB = headA;
        else tempB = tempB->next;
    }

    return tempA;
}