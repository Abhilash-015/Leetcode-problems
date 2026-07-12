class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        int n=a.size();
        vector<int> ans(n,0);
        unordered_map<int,int> m;
        vector<int> tp=a;
        sort(tp.begin(),tp.end());
        int rank=1;
        for(int i=0;i<tp.size();i++){
            if(m.find(tp[i])==m.end()){
                m[tp[i]]=rank++;
            }
            else{}
        }
        for(int i=0;i<n;i++){
            ans[i]=m[a[i]];
        }
        return ans;
    }
};