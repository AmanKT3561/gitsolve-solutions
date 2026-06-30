// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Repeated String Match
// URL        : https://leetcode.com/problems/repeated-string-match/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-06-30T10:24:24.104Z

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        if (b.empty()) return 0;
        string s = a;
        while (s.size() < b.size()) s += a;
        if (s.find(b) != string::npos) return (int) ((s.find(b) + b.size() + a.size() - 1) / a.size());
        s += a;
        size_t pos = s.find(b);
        if (pos != string::npos) return (int) ((pos + b.size() + a.size() - 1) / a.size());
        return -1;
    }
};
