 class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> answer = digits; 
        int n = answer.size();

        for (int i = n - 1; i >= 0; i--) {
            if (answer[i] < 9) {
                answer[i]++;
                return answer;
            }
            answer[i] = 0;
        }

        answer.insert(answer.begin(), 1);
        return answer;
    }
};
