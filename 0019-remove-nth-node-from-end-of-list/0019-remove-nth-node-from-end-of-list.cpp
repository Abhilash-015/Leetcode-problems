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
    ListNode* removeNthFromEnd(ListNode* h, int k) {
        ListNode* tp=h;
        int n=0;
        while(tp!=NULL){
            n++;
            tp=tp->next;
        }
        if(n==1&&k==1){return NULL;}
        int tar=n-k;
        tp=h;int i=1;
        if((tp!=NULL)&&tar==0){h=tp->next;}
        while(tp!=NULL&&i!=tar){
            i++;
            tp=tp->next;
        }   
        if((tp!=NULL)&&tp->next!=NULL){
            ListNode * z=tp->next;
            tp->next=tp->next->next;
            z->next=NULL;
        }
        return h;
    }
};