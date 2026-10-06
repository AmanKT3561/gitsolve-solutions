// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Ugly Number III
// URL        : https://leetcode.com/problems/ugly-number-iii/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-10-06T16:51:33.214Z

typedef long long ll;
#define MAX_ANS 2e9 // 2 * 10^9

class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {
        int left = 0, right = MAX_ANS, result = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (count(mid, a, b, c) >= n) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return result;
    }
    int count(ll num, ll a, ll b, ll c) {
        return (int)(num / a + num / b + num / c
            - num / lcm(a, b)
            - num / lcm(b, c)
            - num / lcm(a, c)
            + num / (lcm(a, lcm(b, c))));
    }
    ll gcd(ll a, ll b) {
        if (a == 0) return b;
        return gcd(b % a, a);
    }
    ll lcm(ll a, ll b) {
        return a * b / gcd(a, b);
    }
};