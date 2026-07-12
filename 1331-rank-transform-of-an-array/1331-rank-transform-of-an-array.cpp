class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        int n=a.size();
        vector<int> ans(n,0);
        vector<pair<int,int>> tp(n);
        for(int i=0;i<n;i++){
            tp[i]={a[i],i};
        }
        if(tp.size()==0){return {};}
        sort(tp.begin(),tp.end());
        int rank=1;
        ans[tp[0].second]=1;
        for(int i=1;i<n;i++){
            if(tp[i].first!=tp[i-1].first){rank++;}
            ans[tp[i].second]=rank;
        }
        return ans;
    }
};