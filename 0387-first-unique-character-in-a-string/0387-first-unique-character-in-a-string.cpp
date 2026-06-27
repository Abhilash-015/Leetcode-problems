class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(m.find(s[i])!=m.end()){
                m[s[i]]++;
            }
            else{m[s[i]]=1;}
        }
        for(int i=0;i<n;i++){
            if(m[s[i]]==1){return i;}
        }
        return -1;
    }
};