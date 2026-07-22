class Solution {
public:
    int uniquePaths(int m, int n) {
        // vector<int> dp(n, 1);

        // for(int i = 1; i < m; i++) {
        //     for(int j = 1; j < n; j++) {
        //         dp[j] = dp[j] + dp[j - 1];
        //     }
        // }

        // return dp[n - 1];

        vector<vector<int>>dp(m,vector<int>(n,0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0&&j==0){
                    dp[i][j]=1;
                }
                else{
                    int down=0;
                    int right=0;
                    if(i>0){
                        down=dp[i-1][j];
                    }
                    if(j>0){
                        right=dp[i][j-1];
                    }
                    dp[i][j]=right+down;
                }
                
            }
        }
        return dp[m-1][n-1];
    }
};