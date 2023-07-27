/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *tptr,*small,*tall;
    if(head==NULL || head->next==NULL || head->next->next==NULL){
        return 0;
    }
    tall=head;
    small=head;
    while(tall!=NULL && tall->next!=NULL){
        small=small->next;
        tall=tall->next->next;
        if(small==tall){
            return 1;
        }
    }
    return 0;
}