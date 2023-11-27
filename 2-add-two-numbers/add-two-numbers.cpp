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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    if(l1==NULL){
        return l2;
    }
    if(l2==NULL){
        return l1;
    }
    ListNode* nl=new ListNode(0);
    ListNode* nh=nl;
    int c=0;
    while(l1!=NULL && l2!=NULL){
        int v=l1->val+l2->val+c;
        c=v/10;
        v=v%10;
        ListNode* nn =new ListNode(v);
        nl->next=nn;
        nl=nl->next;
        l1=l1->next;
        l2=l2->next;
    }
    while(l1!=NULL){
        int v=l1->val+c;
        c=v/10;
        v=v%10;
        ListNode* nn =new ListNode(v);
        nl->next=nn;
        nl=nl->next;
        l1=l1->next;
    }
    
    while(l2!=NULL){
        int v=l2->val+c;
        c=v/10;
        v=v%10;
        ListNode* nn =new ListNode(v);
        nl->next=nn;
        nl=nl->next;
        l2=l2->next;
    }
    if(c){
        ListNode* nn =new ListNode(c);
        nl->next=nn;
        nl=nl->next;
    }
    return nh->next;

}
};