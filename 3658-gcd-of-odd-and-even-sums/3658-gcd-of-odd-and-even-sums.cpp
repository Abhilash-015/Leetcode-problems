class Solution {
public:
    int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
    int gcdOfOddEvenSums(int n) {
        int sodd=0,seven=0;
        for(int i=1;i<=2*n;i++){
            i%2==0?seven+=i:sodd+=i;
        }
        int ans=gcd(seven,sodd);
        return ans;
    }
};