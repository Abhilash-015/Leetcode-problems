class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n=a.size();
        for(int i =0;i<n;i++){
            a[i]--;
        }
        if(n==1){return a[0];}
        if(n==2){return (a[0])*(a[1]);}
        sort(a.begin(),a.end());
        return a[n-1]*a[n-2];
    }
};