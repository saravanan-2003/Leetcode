/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *tptr,*prev;
    tptr=head;
    int count=0,temp=0;
    if(head==NULL || head->next ==NULL && n==1){
        return NULL;
    }
    while(tptr!=NULL && tptr->next!=NULL){
        count++;
        tptr=tptr->next;
    }
    tptr=head;
    prev=NULL;
    count=count-n;
    if(count<0){
        head=head->next;
        return head;
    }
    while(count){
        tptr=tptr->next;
        count--;
    }
    tptr->next=tptr->next->next;
    return head;
}