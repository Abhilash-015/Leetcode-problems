class Solution {
public:
    int minMoves(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        bool flag=true;
        if(a.size()<=1){return 0;}
        for(int i=0;i<=n-2;i++){
            if(a[i]!=a[i+1]){
                flag=false;
            }
        }
        if(flag){return 0;}
        int mini=a[0];
        int maxi=a[n-1];
        int acc=0;
        for(int i=n-1;i>=1;i--){
            int diff=maxi-mini;
            acc+=diff;
            mini=a[0]+acc;
            maxi=a[i-1]+acc;
        }
        return acc; 
    }
};