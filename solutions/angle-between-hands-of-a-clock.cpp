// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Angle Between Hands of a Clock
// URL        : https://leetcode.com/problems/angle-between-hands-of-a-clock/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-06-18T05:23:54.013Z

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double x = hour + minutes / 60.0;
        double diff = fmod(11.0 * x, 12.0);
        return min(diff, 12.0 - diff) * 30.0;
    }
};