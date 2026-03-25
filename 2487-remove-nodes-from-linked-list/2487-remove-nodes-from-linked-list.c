struct ListNode*reverse(struct ListNode*head){
    struct ListNode*temp=head,*prev=NULL,*next=NULL;
    while(temp!=NULL){
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    return prev;
}

struct ListNode*removeNodes(struct ListNode*head){
    head=reverse(head);
    struct ListNode*temp=head;
    int max=head->val;

    while(temp!=NULL&&temp->next!=NULL){
        if(temp->next->val<max){
            temp->next=temp->next->next;
        }else{
            temp=temp->next;
            max=temp->val;
        }
    }

    return reverse(head);
}