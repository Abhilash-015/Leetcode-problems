class Solution {
public:
    int maxProduct(int n) {
        int x=n;
        if(n<10){return n;}
        int m1=-1,m2=-1;
        while(x!=0){
            int dig=x%10;
            if(dig>=m1){
                m2=m1;
                m1=dig;
            }
            else if(dig>m2){
                m2=dig;
            }
            x/=10;
        }
        return m1*m2;;
    }
};