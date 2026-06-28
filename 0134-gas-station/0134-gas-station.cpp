class Solution {
public:
    int canCompleteCircuit(vector<int>& g, vector<int>& c) {
        int n=g.size();
        deque<int> dq;
        int gs=0,cs=0;
        for(int i=0;i<n;i++){
            gs+=g[i];
            cs+=c[i];
        }
        if(gs<cs){return -1;}
        int cg=0;
        int start=0;
        for(int i=0;i<n;i++){
            cg=cg+g[i]-c[i];
            if(cg<0){
                cg=0;
                start=i+1;
            }
        }
        
        return start;
    }
};