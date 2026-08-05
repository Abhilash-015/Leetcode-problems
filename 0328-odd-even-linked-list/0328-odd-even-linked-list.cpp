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
    ListNode* oddEvenList(ListNode* h) {
        ListNode* tp=h;
        int n=0;
        while(tp!=NULL){
            n++;
            tp=tp->next;
        }
        if(n<=2){return h;}
        ListNode*h1=h,*h2=h->next;
        ListNode* tp1=h1,*tp2=h2;
        int i=1;
        while(i<=n){
            if(i%2!=0){
                if(tp1->next!=NULL){
                tp1->next=tp1->next->next;
               if(tp1->next!=NULL){ tp1=tp1->next;}
                }
            }
            else{
                if(tp2->next!=NULL){
                    tp2->next=tp2->next->next;
                    tp2=tp2->next;
                }
            }
            i++;
        }
        tp1->next=h2;
        return h1;
    }
};