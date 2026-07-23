class Solution {
public:
    int uniqueXorTriplets(vector<int>& a) {
        int n=a.size();
        int cnt=n;
        if(n==1){return 1;}
        if(n==2){return 2;}
        int ans=1;
        while(ans<=n){
            ans<<=1;
        }
        return ans;
    }
};