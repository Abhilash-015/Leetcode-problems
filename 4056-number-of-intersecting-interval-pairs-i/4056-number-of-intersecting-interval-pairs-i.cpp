class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& in) {
        int cnt=0;
        int n=in.size();
        sort(in.begin(),in.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int st1=in[i][0],en1=in[i][1],st2=in[j][0],en2=in[j][1];
                if(st1<=st2){
                    if(en1>=st2){cnt++;}
                }
                else{
                    if(st1<=en2){cnt++;}
                }
            }
        }
        return cnt;
    }
};