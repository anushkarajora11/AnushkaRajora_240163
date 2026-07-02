// class Solution {
// public:
//     int subarraysWithK(vector<int>& nums, int k) {
//         int count=0;
//         unordered_map<int,int>freq;
//         int i=0;
//         int j=0;
//   for(int j=0;j<nums.size();j++){
//     freq[nums[j]]++;
  
        
//             while(freq.size()>k){
//                 freq[i]--;
                
//             }
//             if(freq[nums[i]]==0){
//                 freq.erase(nums[i]);

//                 i++;
//             }
        

//             count+=j-i+1;
//         }
//         return count;
//     }
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         return subarraysWithK( nums,k)-subarraysWithK(nums,k-1);
//     }
// };


class Solution {
public:
    int atMostK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int left = 0;
        int count = 0;

        for (int right = 0; right < nums.size(); right++) {
            freq[nums[right]]++;

            while (freq.size() > k) {
                freq[nums[left]]--;

                if (freq[nums[left]] == 0)
                    freq.erase(nums[left]);

                left++;
            }

            count += (right - left + 1);
        }

        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};