// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Integer to Roman
// URL        : https://leetcode.com/problems/integer-to-roman/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-06-16T06:52:50.641Z

class Solution {
public:
    string intToRoman(int num) {
        const vector<pair<int, string>> valueSymbols{
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
            {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
            {5, "V"},    {4, "IV"},   {1, "I"}};

        string res;

        for (const auto& [value, symbol] : valueSymbols) {
            if (num == 0)
                break;

            while (num >= value) {
                res += symbol;
                num -= value;
            }
        }

        return res;        
    }
};