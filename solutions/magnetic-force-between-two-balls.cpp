// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Magnetic Force Between Two Balls
// URL        : https://leetcode.com/problems/magnetic-force-between-two-balls/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-07-16T02:31:01.072Z

class Solution {
public:
    int maxDistance(vector<int>& arr, int mm) {
        int l = 0;
        int r = 1e9 + 7;

        sort(arr.begin(), arr.end());

        auto func = [&](int m) -> bool {
            int k = 0;
            
            k++;
            int lastpos = arr[0];
            for (int i = 0; i < arr.size(); i++) {

                if (k == mm)
                    return 1;
                if (lastpos + m <= arr[i]) {
                    k++;
                    lastpos = arr[i];
                }
            }

            return k >= mm;
        };

        int ans = -1;
        while (l <= r) {
            int mid = (l + r) / 2;

            if (func(mid)) {
                ans = mid;
                l = mid + 1;
            } else
                r = mid - 1;
        }
        return ans;
    }
};