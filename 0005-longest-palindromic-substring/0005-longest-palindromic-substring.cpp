class Solution {
public:
    
string longestPalindrome(string s) {
      int n=s.length();
     int start=0;int end;int done=0;
     int len=0;
     if(n==1||n==0){
        return s;
     }
     else {for(int i=0;i<n;i++){
        int lo=i,hi=i;
        while((lo>=0)&&(hi<n)&&(s[lo]==s[hi])){
            if(hi!=lo){
             done=1;
            }
            if((hi-lo)>len){
                start=lo;end=hi;
                len=hi-lo;
            }
            lo--;hi++;
        }
        lo=i;hi=i+1;
        while((lo>=0)&&(hi<n)&&(s[lo]==s[hi])){
            if(hi!=lo){
             done=1;
            }
             if((hi-lo)>len){
                start=lo;end=hi;
                len=hi-lo;
            }
            lo--;hi++;
        }
     }}
    
     
     return s.substr(start,len+1);
     
    }
};