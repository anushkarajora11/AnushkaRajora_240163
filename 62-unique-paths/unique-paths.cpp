class Solution {
public:

    int helper(int x, int y, int m, int n, vector<vector<int>>& dp) {

        if (x == m - 1 && y == n - 1)
            return 1;

        if (x >= m || y >= n)
            return 0;

        if (dp[x][y] != -1)
            return dp[x][y];

        int dx[] = {0, 1};
        int dy[] = {1, 0};

        int count = 0;

        for (int i = 0; i < 2; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            count += helper(nx, ny, m, n, dp);
        }

        return dp[x][y] = count;
    }

    int uniquePaths(int m, int n) {

        vector<vector<int>> dp(m, vector<int>(n, -1));

        return helper(0, 0, m, n, dp);
    }
};