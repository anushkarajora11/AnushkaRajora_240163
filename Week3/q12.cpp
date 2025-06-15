#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> result;
        vector<string> phone_pair = {
            "",     "",     "abc",  "def", 
            "ghi",  "jkl",  "mno", 
            "pqrs", "tuv",  "wxyz"
        };

        string current;
        backtrack(digits, 0, phone_pair, current, result);
        return result;
    }

    void backtrack( string& digits, int index,  vector<string>& phone_pair, string& current, vector<string>& result) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        string letters = phone_pair[digits[index] - '0'];
        for (char ch : letters) {
            current.push_back(ch);
            backtrack(digits, index + 1, phone_pair, current, result);
            current.pop_back();
        }
    }
};