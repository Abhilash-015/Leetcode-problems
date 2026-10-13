class Solution {
public:
    long long maxAlternatingSum(vector<int>& a) {
        int n=a.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(a[i]<0){
                a[i]=-a[i];
            }
        }
        sort(a.begin(),a.end());
        int j=n-1;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans[i]=a[j--];
                sum+=ans[i]*ans[i];
            }
            else{};
        }
        while(j>=0){
            sum-=a[j]*a[j];
            j--;
        }
        return sum;
    }
};