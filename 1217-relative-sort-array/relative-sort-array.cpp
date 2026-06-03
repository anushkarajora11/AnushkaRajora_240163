class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int> ans;
        vector<int> rem;

        for(int i = 0; i < arr2.size(); i++) {

            for(int j = 0; j < arr1.size(); j++) {

                if(arr2[i] == arr1[j]) {
                    ans.push_back(arr1[j]);
                    arr1[j] = -1; // mark as used
                }
            }
        }

        for(int i = 0; i < arr1.size(); i++) {
            if(arr1[i] != -1) {
                rem.push_back(arr1[i]);
            }
        }

        sort(rem.begin(), rem.end());

        for(int x : rem) {
            ans.push_back(x);
        }

        return ans;
    }
};