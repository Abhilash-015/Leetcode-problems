class Solution {
public:
    void move(vector<vector<int>>& a){
        int m=a.size();int n=a[0].size();
        int piv=a[0][0];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==m-1&&j==n-1){
                    a[0][0]=piv;
                }
                else if(j==n-1){
                    if(i+1<m){
                        int t=a[i+1][0];
                        a[i+1][0]=piv;
                        piv=t;
                    }
                }
                else{
                    if(j+1<n){
                    int t=a[i][j+1];
                    a[i][j+1]=piv;
                    piv=t;
                    }
                }
            }
        }
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        while(k--){
            move(grid);
        }
        return grid;
    }
};