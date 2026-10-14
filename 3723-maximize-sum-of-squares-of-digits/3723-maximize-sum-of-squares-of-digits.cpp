class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        for(int i=0;i<num;i++){
            if(i==num-1&&sum>9){
                return "";
            }
            if(sum>9){
                ans+='9';
                sum-=9;
            }
            else if(sum<=9&&sum>0){
                char ch=sum+'0';
                ans+=ch;
                sum=0;
            }
            else{
                ans+='0';
            }
        }
        return ans;
    }
};