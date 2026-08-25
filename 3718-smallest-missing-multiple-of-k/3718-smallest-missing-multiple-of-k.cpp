class Solution {
public:
    int missingMultiple(vector<int>& a, int k) {
        int n=a.size();
        set<int> s;
        for(int i=0;i<n;i++){
            if(a[i]%k==0){s.insert(a[i]);}
        }
        int i=k;
        while(true){
            if(s.find(i)==s.end()){
                return i;
            }
            else{
                i+=k;
            }
        }
        return i;
    }
};