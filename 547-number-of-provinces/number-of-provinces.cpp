class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n, 0);
        int count = 0;

        function<void(int)> dfs = [&](int node) {
            visited[node] = 1;

            for (int j = 0; j < n; j++) {
                if (isConnected[node][j] == 1 && !visited[j]) {
                    dfs(j);
                }
            }
        };

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i);
                count++;
            }
        }

        return count;
    }
};