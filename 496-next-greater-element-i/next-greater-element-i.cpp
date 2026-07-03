class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++) {

            int x = nums1[i];
            int nge = -1;

            // find x in nums2
            for(int j = 0; j < nums2.size(); j++) {

                if(nums2[j] == x) {

                    // now check right side
                    for(int k = j + 1; k < nums2.size(); k++) {
                        if(nums2[k] > x) {
                            nge = nums2[k];
                            break;
                        }
                    }
                    break;
                }
            }

            ans.push_back(nge);
        }

        return ans;
    }
};