class Solution {
public:
    vector<int> resultArray(vector<int>& a) {
        int n=a.size();
        vector<int> ar1,ar2;
        for(int i=0;i<n;i++){
        if(i==0||i==1){
            if(i%2==0){
                ar1.push_back(a[i]);
            }
            else{
                ar2.push_back(a[i]);
            }}
        else{
            if(ar1[ar1.size()-1]>ar2[ar2.size()-1]){
                    ar1.push_back(a[i]);
            }
            else{
                    ar2.push_back(a[i]);
                }
            }
        }
        int j=0;
        for(int i=0;i<ar1.size();i++){
            a[j++]=ar1[i];
        }
        for(int i=0;i<ar2.size();i++){
            a[j++]=ar2[i];
        }
        return a;
    }
};