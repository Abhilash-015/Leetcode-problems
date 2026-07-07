class Solution {
public:
    long long sumAndMultiply(int n) {
        long long z=n;
        long long sum=0;long long x=0;
        while(z!=0){
            if(z%10!=0){
                x=x*10+z%10;
            }
            else{}
            z/=10;
        }
        long long ans=x;
        while(ans!=0){
            sum+=ans%10;
            ans/=10;
        }
        long long xx=0;
        while(x!=0){
            xx=xx*10+x%10;
            x/=10;
        }
        return xx*sum;
    }
};