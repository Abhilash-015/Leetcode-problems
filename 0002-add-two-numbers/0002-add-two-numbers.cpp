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
       ListNode* tp1=l1,*tp2=l2;
       int carry=0;
       ListNode* root=new ListNode((tp1->val+tp2->val)%10);
       ListNode* tpp=root;
       carry=(tp1->val+tp2->val)/10;
       tp1=tp1->next;tp2=tp2->next;
       while(tp1!=NULL&&tp2!=NULL){
        int sum=tp1->val+tp2->val+carry;
            ListNode* y=new ListNode(sum%10);
            tpp->next=y;
            carry=sum/10;
            tp1=tp1->next;tp2=tp2->next;
            tpp=tpp->next;
       }
       if(tp1==NULL){
        while(tp2!=NULL){
            ListNode* y=new ListNode((tp2->val+carry)%10);
            tpp->next=y;
            tpp=tpp->next;
            carry=(tp2->val+carry)/10;
            tp2=tp2->next;
        }
       }
       else{
        while(tp1!=NULL){
            ListNode* y=new ListNode((tp1->val+carry)%10);
            tpp->next=y;
            tpp=tpp->next;
            carry=(tp1->val+carry)/10;
            tp1=tp1->next;
        }
       }
       if(carry!=0){
        ListNode* y=new ListNode(carry);
        tpp->next=y;
        tpp=tpp->next;
        carry=0;
       }
       return root;
    }
};