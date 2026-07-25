class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;
        int x=n;
        while(x!=0){
            v.push_back(x%10);
            x/=10;
        }
        int maxx=INT_MIN;
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                maxx=max(maxx,v[i]*v[j]);
            }
        }
        return maxx;
    }
};