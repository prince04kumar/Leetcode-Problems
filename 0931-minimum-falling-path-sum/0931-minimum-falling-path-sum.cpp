class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));

        for (int j = 0; j < n; j++)
            dp[n - 1][j] = matrix[n - 1][j];

        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                int down = matrix[i][j] + dp[i + 1][j];
                int left = (j > 0) ? matrix[i][j] + dp[i + 1][j - 1] : (int)1e9;
                int right = (j < n - 1) ? matrix[i][j] + dp[i + 1][j + 1] : (int)1e9;
                dp[i][j] = min({down, left, right});
            }
        }

        int ans = INT_MAX;
        for (int j = 0; j < n; j++)
            ans = min(ans, dp[0][j]);

        return ans;
    }
};
