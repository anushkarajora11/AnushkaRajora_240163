class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;

        function<void(int)> generate = [&](int index) {

            // If all positions are fixed
            if(index == nums.size()) {
                ans.push_back(nums);
                return;
            }

            // Try every element at current position
            for(int i = index; i < nums.size(); i++) {

                swap(nums[index], nums[i]);

                generate(index + 1);

                // Backtrack
                swap(nums[index], nums[i]);
            }
        };

        generate(0);

        return ans;
    }
};