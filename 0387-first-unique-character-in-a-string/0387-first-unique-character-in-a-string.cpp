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


int firstUniqChar(string s) {
    int freq[26] = {0};

    for(char c : s)
        freq[c - 'a']++;

    for(int i = 0; i < s.size(); i++)
        if(freq[s[i] - 'a'] == 1)
            return i;

    return -1;
}
};