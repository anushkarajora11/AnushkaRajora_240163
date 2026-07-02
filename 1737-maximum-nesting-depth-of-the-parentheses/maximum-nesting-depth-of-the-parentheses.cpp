class Solution {
public:
    int maxDepth(string s) {
       int curr=0;
       int max=0;

       for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            curr++;
        }
        if(s[i]==')'){
            curr--;
        }
        if(curr>max){
            max=curr;
        }
       } 
       return max;
    }
};