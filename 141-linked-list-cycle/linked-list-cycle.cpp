/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *h){
        if(h==NULL)return 0;
        ListNode *sl=h;
        ListNode *fs=h->next;
        while(fs!=NULL){
            if(sl==fs){
                return 1;
            }
            fs=fs->next;
            if(fs!=NULL){
                fs=fs->next;
                sl=sl->next;
            }
        }
        return 0;
    }
};