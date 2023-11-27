/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getlen(ListNode* head){
    int c=0;
    while(head!=NULL){
        c++;
        head=head->next;
    }
    return c;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    int l=getlen(head);
    if(n<=l){
        ListNode* temp=head;
        ListNode* prev=NULL;
        int c=l-n;
        if(c==0){
            temp=temp->next;
            return temp;
        }
        int t=0;
        while(t<c){
            prev=temp;
            temp=temp->next;
            t++;
        }
        prev->next=temp->next;
        return head;
    }
    return head;
}
};