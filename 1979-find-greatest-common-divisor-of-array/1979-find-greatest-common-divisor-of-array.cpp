class Solution {
public:
    int findGCD(vector<int>& a) {
        int minn=INT_MAX,maxx=INT_MIN;
        for(int i=0;i<a.size();i++){
            minn=min(minn,a[i]);
            maxx=max(maxx,a[i]);
        }
        return gcd(maxx,minn);
    }
};