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
    bool isPalindrome(ListNode* head) {
        ListNode* tp=head;
        ListNode* copy=new ListNode(head->val);
        ListNode* copyh=copy;
        tp=tp->next;
        while(tp!=NULL){
            ListNode* newnode=new ListNode(tp->val);
            copy->next=newnode;
            copy=newnode;
            tp=tp->next;
        }
        copy->next=NULL;
        //reverse
        ListNode* pr=NULL,*curr=copyh,*N=copyh->next;
        while(curr!=NULL){
            curr->next=pr;
            pr=curr;
            curr=N;
            if(N==NULL){break;}
             N=N->next;
        }
        copyh=pr;
        //check
        ListNode * tp1=head,*tp2=copyh;
        while(tp1!=NULL&&tp2!=NULL){
            if(tp1->val==tp2->val){}
            else{return false;}
            tp1=tp1->next;
            tp2=tp2->next;
        }
        return true;
    }
};