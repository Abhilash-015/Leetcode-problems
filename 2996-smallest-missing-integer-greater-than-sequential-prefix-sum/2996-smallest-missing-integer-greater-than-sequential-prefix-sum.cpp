class Solution {
public:
    int missingInteger(vector<int>& a) {
        int n=a.size();
        if(n==1){return a[0]+1;}
        int sum=a[0];      
        set<int> s;
        for(int i=1;i<n;i++){
            if((a[i-1]+1)==a[i]){
                sum+=a[i];
            }
            else{break;}
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]<sum){}
           else if(a[i]==sum){
                sum++;
            }
            else{return sum;}
        }
        return sum;
    }
};