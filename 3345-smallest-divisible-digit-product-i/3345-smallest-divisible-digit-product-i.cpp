class Solution {
public:
    int smallestNumber(int n, int t) {
        int sum=1;
        int x=n;
        while(x!=0){
            sum*=x%10;
            x/=10;
        }
        while(sum%t!=0){
            if(n%10==9){return ++n;;}
            sum=sum/(n%10);
            n++;
            sum=sum*(n%10);
        }
        return n;
    }
};