class Solution {
public:
    int hammingWeight(int n) {
        vector<int> a;
        while(n){
            int r=n%2;
            if(r==1){
                a.push_back(r);
            }
            n/=2;

        }
        return a.size();
    }
};