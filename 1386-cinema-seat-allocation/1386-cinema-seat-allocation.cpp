class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& rs) {
        int ans=n*2;
        sort(rs.begin(),rs.end());
        for(int i=0;i<rs.size();i++){
            int piv=rs[i][0];
            vector<int> v(10,0);
            while(i<rs.size()&&piv==rs[i][0]){
            if(rs[i][1]<10){v[rs[i][1]-1]=1;}
                i++;
            }
            i--;
            int k=2;
            int s1=0,s2=0,s3=0;
            for(int j=1;j<=4;j++){
                s1+=v[j];
            }
            for(int j=3;j<=6;j++){
                s2+=v[j];
            }
            for(int j=5;j<=8;j++){
                s3+=v[j];
            }
            if(s1==0&&s2==0&&s3==0){
                k=2;
                ans=ans-(2-k);
                continue;
            }
            else if(s1!=0&&s2!=0&&s3!=0){
                k=0;
                ans=ans-(2-k);
                continue;
            }
            else if(s1!=0&&s2==0&&s3!=0){
                k=1;
                ans=ans-(2-k);
                continue;
            }
            else if(s1==0&&s2!=0&&s3==0){
                k=0;
                ans=ans-(2-k);
                continue;
            }
            else{
                k=1;
                ans=ans-(2-k);
                continue;
            }
        }
        return ans;
    }
};