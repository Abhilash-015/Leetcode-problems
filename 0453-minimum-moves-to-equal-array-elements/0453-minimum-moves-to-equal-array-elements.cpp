class Solution {
public:
    int minMoves(vector<int>& a) {
        int n=a.size();
        
        bool flag=true;
        if(a.size()<=1){return 0;}
        for(int i=0;i<=n-2;i++){
            if(a[i]!=a[i+1]){
                flag=false;
            }
        }
        if(flag){return 0;}
        int minn=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            minn=min(minn,a[i]);
        }
        for(int i=n-1;i>=0;i--){
            ans+=a[i]-minn;
        }
        return ans; 
    }
};