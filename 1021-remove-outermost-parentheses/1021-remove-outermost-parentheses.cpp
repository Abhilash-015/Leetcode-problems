class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        stack<char> st;
        string ans="";
        int lo=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(!st.empty()){
                    st.pop();
                }
            }
            if(st.empty()){
                if(lo+1<n){
                   if(lo+1!=i){ ans+=s.substr(lo+1,i-lo-1);}
                }
                lo=i+1;
            }
        }
        return ans;
    }
};