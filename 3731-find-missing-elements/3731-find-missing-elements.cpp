class Solution {
public:
    vector<int> findMissingElements(vector<int>& a) {
        int n=a.size();
        int minn=INT_MAX;
        int maxx=INT_MIN;
        vector<int> ans;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            minn=min(minn,a[i]);
            maxx=max(maxx,a[i]);
            s.insert(a[i]);
        }
        for(int i=minn;i<=maxx;i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};