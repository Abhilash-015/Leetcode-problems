class Solution {
public:
    int sumCounts(vector<int>& a) {
        int ans=0;
        int n=a.size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                unordered_map<int,int> mp;
                for(int k=j;k<=i;k++){
                    mp[a[k]]++;
                }
                sum+=(mp.size())*(mp.size());
            }
        }
        return sum;
    }
};