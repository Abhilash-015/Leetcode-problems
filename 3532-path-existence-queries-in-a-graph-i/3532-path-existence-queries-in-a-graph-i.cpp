class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& a, int maxd, vector<vector<int>>& q) {
        vector<bool> ans;
        vector<int> com(n,0);
        com[0]=0;
        for(int i=1;i<n;i++){
            com[i]=com[i-1];
            if(abs(a[i]-a[i-1])>maxd){
                com[i]++;
            }
        }
        for(int i=0;i<q.size();i++){
            if(com[q[i][0]]==com[q[i][1]]){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};