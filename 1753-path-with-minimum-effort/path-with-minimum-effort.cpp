class Solution {
public:
    bool bfs(vector<vector<int>>& heights, int limit) {
        int m = heights.size();
        int n = heights[0].size();

        queue<pair<int,int>> q;
        vector<vector<int>> vis(m, vector<int>(n, 0));

        q.push({0,0});
        vis[0][0] = 1;

        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};

        while (!q.empty()) {
            auto [r,c] = q.front();
            q.pop();

            if (r == m-1 && c == n-1)
                return true;

            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if (nr >= 0 && nr < m && nc >= 0 && nc < n &&
                    !vis[nr][nc] &&
                    abs(heights[r][c] - heights[nr][nc]) <= limit) {

                    vis[nr][nc] = 1;
                    q.push({nr,nc});
                }
            }
        }

        return false;
    }

    int minimumEffortPath(vector<vector<int>>& heights) {
        int low = 0, high = 1000000;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (bfs(heights, mid))
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};