class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> v;
        for(int i=0;i<m;i++){
            if(i==0){
                string s="";
                for(int j=0;j<n;j++){
                    s+='.';
                }
                v.push_back(s);
            }
            else{
                string s="";
                for(int j=0;j<n-1;j++){
                    s+='#';
                }
                s+='.';
                v.push_back(s);
            }
        }
        return v;
    }
};