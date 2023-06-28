/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* dummy;
    dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* temp;
    temp=dummy;
    int count=0;
    while(l1!=NULL || l2!=NULL ||count){
        int sum=0;
        if(l1!=NULL){
            sum=sum+l1->val;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum=sum+l2->val;
            l2=l2->next;
        }
        sum=sum+count;
        count=sum/10;
        struct ListNode* newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val=sum%10;
        temp->next=newnode;
        newnode->next=NULL;
        temp=temp->next;
    }
    return dummy->next;
}
