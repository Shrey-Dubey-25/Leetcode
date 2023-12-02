/**
 * Definition for singly-linked list.*/
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
//  };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
    vector<ListNode *>a;
    vector<ListNode *>b;
    if(h1==NULL|| h2==NULL){
        return NULL;
    }
    ListNode *p1=h1,*p2=h2;
    while(p1!=NULL){
        a.push_back(p1);
        p1=p1->next;
    }
    while(p2!=NULL){
        b.push_back(p2);
        p2=p2->next;
    }

    for(auto i:a){
        for(auto j:b){
            if(j==i){
                return j;
            }
        }
    }   
    return NULL;
}
};