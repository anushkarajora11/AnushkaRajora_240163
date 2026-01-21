class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int water = 0;
        int i = 0, j = n - 1;

        while (i < j) {
            int area = (j - i) * min(height[i], height[j]);
            water = max(water, area);

            if (height[i] < height[j]) i++;
            else j--;
        }

        return water;
    }
};
