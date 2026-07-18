class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> a;

        int top = 0;
        int bottom = m - 1;
        int left = 0;
        int right = n - 1;

        while(top <= bottom && left <= right){

            // left to right
            for(int j = left; j <= right; j++){
                a.push_back(matrix[top][j]);
            }
            top++;

            // top to bottom
            for(int i = top; i <= bottom; i++){
                a.push_back(matrix[i][right]);
            }
            right--;

            // right to left
            if(top <= bottom){
                for(int j = right; j >= left; j--){
                    a.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            // bottom to top
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    a.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return a;
    }
};