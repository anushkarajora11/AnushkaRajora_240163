class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void solve(vector<int>& candidates, int target, int idx) {
        if (target == 0) {
            ans.push_back(path);
            return;
        }

        if (idx == candidates.size() || target < 0)
            return;

        // Take the current element (can reuse it)
        path.push_back(candidates[idx]);
        solve(candidates, target - candidates[idx], idx);
        path.pop_back();

        // Skip the current element
        solve(candidates, target, idx + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates, target, 0);
        return ans;
    }
};