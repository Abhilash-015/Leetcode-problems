class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        int n=a.size();
        int minn=INT_MAX;
        int maxx=INT_MIN;
        unordered_set<int> s;
        long long asum=0;
        for(int i=0;i<n;i++){
            minn=min(minn,a[i]);
            maxx=max(maxx,a[i]);
            asum+=a[i];
            s.insert(a[i]);
        }
        if(minn>1){return 1;}
        if(maxx<=0){return 1;}
        for(int i=1;i<=maxx;i++){
            if(s.find(i)==s.end()){return i;}
        }
        return maxx+1;
    }
};