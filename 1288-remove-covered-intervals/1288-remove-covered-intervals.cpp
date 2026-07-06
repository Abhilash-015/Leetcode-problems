class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& v) {
        int cnt=0;
        int n=v.size();
        if(v.size()==0){return 0;}
        sort(v.begin(),v.end());
        set<vector<int>> s;
        int maxst=v[0][0],maxend=v[0][1];
        
        for(int i=1;i<n;i++){
            if(v[i][0]>=maxst&&v[i][1]<=maxend){
                    cnt++;
                    s.insert({v[i][0],v[i][1]});
            }
            else{
                maxst=max(maxst,v[i][0]);
                maxend=max(maxend,v[i][1]);
                
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v[i][0]>=maxst&&v[i][1]<=maxend){
                 if(s.find({v[i][0],v[i][1]})==s.end()){
                       cnt++;
                       s.insert({v[i][0],v[i][1]});}
            }
            else{
                maxst=max(maxst,v[i][0]);
                maxend=max(maxend,v[i][1]);
                
            }
        }
        return n-cnt+1;
    }
};