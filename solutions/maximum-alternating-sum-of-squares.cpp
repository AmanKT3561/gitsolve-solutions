// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Maximum Alternating Sum of Squares
// URL        : https://leetcode.com/problems/maximum-alternating-sum-of-squares/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-10-13T17:28:46.929Z

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            arr[i] = abs(nums[i]);
        sort(arr.rbegin(), arr.rend());
        for (auto i : arr)
            cout << i << " ";
        int cnt = 1;
        int cnt1 = 0;
        if (n % 2)
            cnt1 = n / 2 + 1;
        else
            cnt1 = n / 2;
        for (int i = 0; i < n; i++) {
            long long res = arr[i] * arr[i];

            if (cnt <= cnt1)
                ans += res;
            else
                ans -= res;
            cnt++;
        }

        return ans;
    }
};