class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& v) {
        int cnt=0;
        int n=v.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i){
                    if(v[i][0]>=v[j][0]&&v[i][1]<=v[j][1]){cnt++;break;}
                }
            }
        }
        return n-cnt;
    }
};