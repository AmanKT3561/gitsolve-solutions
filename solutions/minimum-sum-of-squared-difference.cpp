// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Minimum Sum of Squared Difference
// URL        : https://leetcode.com/problems/minimum-sum-of-squared-difference/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-10-11T01:25:08.923Z

class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1,
                               int k2) {
        multiset<int> st;
        for (int i = 0; i < nums1.size(); i++) {
            st.insert(abs(nums1[i] - nums2[i]));
        }

        for (int i = 0; i < k1 + k2; i++) {
            auto it = prev(st.end());
            long long x = *it;

            st.erase(it);
            st.insert(x - 1);
        }
        long long ans = 0;

        for (auto i : st) {
            ans += (i * i);
        }
        return ans;
    }
};