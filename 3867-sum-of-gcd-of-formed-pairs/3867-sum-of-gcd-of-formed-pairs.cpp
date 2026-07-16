class Solution {
public:
    long long gcdSum(vector<int>& a) {
        long long maxx=a[0];
        long long n=a.size();
        vector<long long> pg(n);
        for(int i=0;i<n;i++){
            maxx=max(maxx,(long long)a[i]);
            pg[i]=gcd(a[i],maxx);
        }
        sort(pg.begin(),pg.end());
        int lo=0,hi=n-1;
        long long ans=0;
        while(lo<hi){
            ans+=gcd(pg[lo],pg[hi]);
            hi--;lo++;
        }
        return ans;
    }
};