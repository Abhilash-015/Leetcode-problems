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
        stack<int> st;
        int n=0;
        while(tp!=NULL){
            n++;
            tp=tp->next;
        }
        tp=head;
        if(n%2==0){
            int cnt=0;
            while(cnt!=n/2){
                st.push(tp->val);
                cnt++;
                tp=tp->next;
            }
            while(tp!=NULL){
                if(tp->val!=st.top()){return false;}
                st.pop();
                tp=tp->next;
            }
        }
        else{
            int cnt=0;
            while(cnt!=n/2){
                st.push(tp->val);
                cnt++;
                tp=tp->next;
            }
            tp=tp->next;
            while(tp!=NULL){
                if(tp->val!=st.top()){return false;}
                st.pop();
                tp=tp->next;
            }
        }
        return true;
    }
};