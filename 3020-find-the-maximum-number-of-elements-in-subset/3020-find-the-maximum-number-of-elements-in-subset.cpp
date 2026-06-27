class Solution {
public:
    int maximumLength(vector<int>& a) {
        int n=a.size();
        map<long long ,int> m;
        for(int i=0;i<n;i++){
            if(m.find(a[i])!=m.end()){
                m[a[i]]++;
            }
            else{
                m[a[i]]=1;
            }
        }
        int ans=INT_MIN;
        for(auto it=m.begin();it!=m.end();it++){
            int cnt=0;
            long long key=it->first;
            if(key==1){
                ans=max(ans,m[1]%2==0?m[1]-1:m[1]);
                continue;
            }
            while(m.find(key)!=m.end()){
                if(m[key]==1){
                    cnt++;
                    break;
                }
                else if(m[key]>=2){
                    cnt+=2;
                }
                if(m.find(key*key)!=m.end()){
                    key=key*key;
                    continue;
                }else{
                cnt--;break;}
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};