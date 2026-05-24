class Solution {
public:
    int numTrees(int n) {

        // dp[i] = number of unique BSTs using i nodes
        vector<int> dp(n + 1, 0);

        // Base cases
        dp[0] = 1;
        dp[1] = 1;

        // Calculate for 2 nodes to n nodes
        for(int nodes = 2; nodes <= n; nodes++) {

            // Try every node as root
            for(int root = 1; root <= nodes; root++) {

                // Nodes on left side
                int left = root - 1;

                // Nodes on right side
                int right = nodes - root;

                // Total ways
                dp[nodes] += dp[left] * dp[right];
            }
        }

        return dp[n];
    }
};