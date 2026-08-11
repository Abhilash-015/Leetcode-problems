class Solution {
public:
    int missingInteger(vector<int>& a) {
        int n=a.size();
        if(n==1){return a[0]+1;}
        int sum=a[0];      
        set<int> s;
        s.insert(a[0]);
        for(int i=1;i<n;i++){
            s.insert(a[i]);
        }
        for(int i=1;i<n;i++){
            if((a[i-1]+1)==a[i]){
                sum+=a[i];
            }
            else{break;}
        }
        while(s.find(sum)!=s.end()){
            sum++;
        }
        return sum;
    }
};