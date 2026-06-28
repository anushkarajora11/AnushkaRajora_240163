class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int original) {

        if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size())
            return;

        if(image[sr][sc] != original)
            return;

        image[sr][sc] = color;

        dfs(image, sr + 1, sc, color, original);
        dfs(image, sr - 1, sc, color, original);
        dfs(image, sr, sc + 1, color, original);
        dfs(image, sr, sc - 1, color, original);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int original = image[sr][sc];

        if(original == color)
            return image;

        dfs(image, sr, sc, color, original);

        return image;
    }
};