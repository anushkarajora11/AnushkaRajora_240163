class Solution {
public:
    int maxRow(vector<vector<int>>& mat, int col) {
        int row = 0;
        int m = mat.size();

        for (int i = 1; i < m; i++) {
            if (mat[i][col] > mat[row][col])
                row = i;
        }

        return row;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int l = 0;
        int r = n - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            int row = maxRow(mat, mid);

            int left = (mid > 0) ? mat[row][mid - 1] : -1;
            int right = (mid < n - 1) ? mat[row][mid + 1] : -1;

            if (mat[row][mid] > left && mat[row][mid] > right)
                return {row, mid};

            else if (mat[row][mid] < left)
                r = mid - 1;

            else
                l = mid + 1;
        }

        return {-1, -1};
    }
};