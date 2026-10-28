class Solution {
public:
    int minCost(vector<vector<int>>& v) {
        int m = v.size(), n = v[0].size();

        vector<vector<unordered_set<int>>> dp(
            m, vector<unordered_set<int>>(n)
        );

        dp[0][0].insert(v[0][0]);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) continue;

                if (i > 0) {
                    for (int x : dp[i - 1][j]) {
                        dp[i][j].insert(x ^ v[i][j]);
                    }
                }

                if (j > 0) {
                    for (int x : dp[i][j - 1]) {
                        dp[i][j].insert(x ^ v[i][j]);
                    }
                }
            }
        }

        return *min_element(
            dp[m - 1][n - 1].begin(),
            dp[m - 1][n - 1].end()
        );
    }
};
