class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& a) {
       int n=a.size();
       sort(a.begin(),a.end());
       if(a[0]!=1){a[0]=1;}
       int maxx=INT_MIN;
       maxx=max(maxx,a[0]);
       for(int i=1;i<n;i++){
        if((a[i]-a[i-1])>1){a[i]=a[i-1]+1;}
        maxx=max(a[i],maxx);
       }
        return maxx;
    }
};