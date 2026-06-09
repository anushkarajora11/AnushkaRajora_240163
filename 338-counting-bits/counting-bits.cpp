class Solution {
public:
int ones(int x){
    int count=0;
    while(x){
        if(x%2==1){
            count++;
        }
        x/=2;
    }
    return count;
}
    vector<int> countBits(int n) {
       vector<int > ans;
       for(int i=0;i<=n;i++){
        ans.push_back(ones(i));
       } 
       return ans;
    }
};