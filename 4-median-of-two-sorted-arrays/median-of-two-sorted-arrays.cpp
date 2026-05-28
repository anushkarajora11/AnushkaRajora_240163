class Solution {
public:

    vector<int> mergearrays(vector<int>& nums1, vector<int>& nums2){

        int m = nums1.size();
        int n = nums2.size();

        vector<int> nums3;

        int i = 0, j = 0;

        while(i < m && j < n){

            if(nums1[i] <= nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            }
            else{
                nums3.push_back(nums2[j]);
                j++;
            }
        }

        while(i < m){
            nums3.push_back(nums1[i]);
            i++;
        }

        while(j < n){
            nums3.push_back(nums2[j]);
            j++;
        }

        return nums3;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> newarray = mergearrays(nums1, nums2);

        int size = newarray.size();

        if(size % 2 == 1){
            return newarray[size/2];
        }

        return (newarray[size/2] + newarray[size/2 - 1]) / 2.0;
    }
};