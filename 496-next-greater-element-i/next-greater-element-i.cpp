class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int x : nums1) {
            int nge = -1;
            bool found = false;

            for(int j = 0; j < nums2.size(); j++) {

                if(nums2[j] == x) {
                    found = true;
                }

                if(found && nums2[j] > x) {
                    nge = nums2[j];
                    break;
                }
            }

            ans.push_back(nge);
        }

        return ans;
    }
};