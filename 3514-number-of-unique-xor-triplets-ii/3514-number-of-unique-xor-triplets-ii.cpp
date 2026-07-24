class Solution {
public:
    int uniqueXorTriplets(vector<int>& a) {
       unordered_set<int> s;
       unordered_set<int> tp;
        int n=a.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s.find(a[i]^a[j])==s.end()){
                s.insert(a[i]^a[j]);}
            }
        }
        for(auto it=s.begin();it!=s.end();it++){
            for(int i=0;i<n;i++){
                if(tp.find(*it^a[i])==tp.end()){
                    ans++;
                    tp.insert(*it^a[i]);
                }
            }
        }
        return ans;
    }
};