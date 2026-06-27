class Solution {
public:
//     int firstUniqChar(string s) {
//     unordered_map<char,int> m;
//     int n = s.length();

//     for(int i = 0; i < n; i++)
//         m[s[i]]++;

//     for(int i = 0; i < n; i++)
//         if(m[s[i]] == 1)
//             return i;

//     return -1;
// }


    int firstUniqChar(string s){
        int n=s.length();
        unordered_map<char,int> m;
        queue<int> q;
        for(int i=0;i<n;i++){
            if(m.find(s[i])!=m.end()){
                m[s[i]]++;
            }
            else{
                m[s[i]]=1;
                q.push(i);
            }        
        }
        while(!q.empty()){
            if(m[s[q.front()]]>1){q.pop();}
            else if(m[s[q.front()]]==1){return q.front();}
        }
        return -1;
    }
};