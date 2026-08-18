class Solution {
public:
    int largestInteger(vector<int>& a, int k) {
        int n=a.size();
        map<int,int> m;
        for(int i=0;i<k;i++){
            m[a[i]]=1;
        }
        for(int i=k;i<n;i++){
            for(int j=i-k+1;j<=i-1;j++){
                m[a[j]]++;
            }
            if(m.find(a[i])==m.end()){
                m[a[i]]=1;
            }
            else{
                m[a[i]]++;
            }
        }
        for(auto it=m.rbegin();it!=m.rend();it++){
            if(it->second==1){
                return it->first;
            }
        }
        return -1;
    }
};