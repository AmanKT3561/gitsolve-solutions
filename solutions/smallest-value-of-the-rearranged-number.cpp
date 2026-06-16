// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Smallest Value of the Rearranged Number
// URL        : https://leetcode.com/problems/smallest-value-of-the-rearranged-number/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-06-16T10:37:14.765Z

class Solution
{
public:
    long long smallestNumber(long long num)
    {
        if (num < 0)
        {
            string s = to_string(-num);
            sort(s.rbegin(), s.rend());
            return -stoll(s);
        }
        else if (num == 0)
            return 0;
        string s = to_string(num);
        sort(s.begin(), s.end());
        int i = 0;
        while (s[i] == '0')
            i++;
        char c = s[i];
        s.erase(s.begin() + i);
        s = c + s;
        return stoll(s);
    }
};