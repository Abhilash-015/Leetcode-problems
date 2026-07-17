class Solution {
public:
    string nextString(const string &s) {
    string ans;
    ans.reserve(s.size() * 2);

    int i = 0;
    while (i < s.size()) {
        char ch = s[i];
        int cnt = 0;

        while (i < s.size() && s[i] == ch) {
            cnt++;
            i++;
        }

        ans += to_string(cnt);
        ans += ch;
    }

    return ans;
}

string countAndSay(int n) {
    string ans = "1";
    while (--n)
        ans = nextString(ans);
    return ans;
}
};