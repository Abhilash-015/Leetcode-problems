class Solution {
public:
    string cnt(string s){
        string ans="";
        for(int i=0;i<s.length();i++){
            int cnt=0;
            char piv=s[i];
            while(piv==s[i]){
                cnt++;i++;
            }
            i--;
            ans += to_string(cnt);
            ans += piv;
        }
        return ans;
    }
    string countAndSay(int n) {
        if(n==1){return "1";}
        string ans="1";
        for(int i=2;i<=n;i++){
            ans=cnt(ans);
        }
        return ans;
    }
};