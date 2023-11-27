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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }
    ListNode* p1=list1;
    ListNode* p2=list2;
    ListNode* nh=new ListNode(0);
    ListNode* nl=nh;
    while(p1!=NULL && p2!=NULL){
        if(p1->val<=p2->val){
            ListNode* nn=new ListNode(p1->val);
            nh->next=nn;
            nh=nh->next;
            p1=p1->next;
        }
        else{
            ListNode* nn=new ListNode(p2->val);
            nh->next=nn;
            nh=nh->next;
            p2=p2->next;
        }
    }
    while(p1!=NULL){
        ListNode* nn=new ListNode(p1->val);
        nh->next=nn;
        nh=nh->next;
        p1=p1->next;
    }
    
    while(p2!=NULL){
        ListNode* nn=new ListNode(p2->val);
        nh->next=nn;
        nh=nh->next;
        p2=p2->next;
    }
    return nl->next;
}
};