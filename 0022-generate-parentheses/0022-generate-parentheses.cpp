class Solution {
public:
    
    void hp(vector<string> & ans,string s,int idx,int n,int cnt){
        if(cnt<0){return;}
        if(idx==n){
           if(cnt==0){ ans.push_back(s);}
            return ;
        }
        hp(ans,s+'(',idx+1,n,cnt+1);
        hp(ans,s+')',idx+1,n,cnt-1);
    }
    // bool check(string s){
    //     int n=s.length();
    //     int cnt=0;
    //     for(int i=0;i<n;i++){
    //         if(s[i]=='('){
    //             cnt++;
    //         }
    //         else{
    //             cnt--;
    //         }
    //         if(cnt<0){return false;}
    //     }
    //     if(cnt==0){return true;}
    //     return false;
    // }
    vector<string> generateParenthesis(int n) {
        string s="";
        int idx=1;
        vector<string>  ans;
        hp(ans,s,0,2*n,0);
        // vector<string> fans;
        // for(int i=0;i<ans.size();i++){
        //     if(check(ans[i])){fans.push_back(ans[i]);}
        // }
        return ans;
    }
};