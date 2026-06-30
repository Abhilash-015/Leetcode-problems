class Solution {
public:
    int numberOfSubstrings(string s) {
    int n = s.size();
    vector<int> cnt(3, 0);

    int lo = 0, ans = 0;

    for (int hi = 0; hi < n; hi++) {
        cnt[s[hi] - 'a']++;

        while (cnt[0] && cnt[1] && cnt[2]) {
            ans += n - hi;
            cnt[s[lo] - 'a']--;
            lo++;
        }
    }

    return ans;
}
};