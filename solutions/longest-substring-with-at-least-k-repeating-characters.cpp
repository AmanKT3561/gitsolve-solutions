// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Longest Substring with At Least K Repeating Characters
// URL        : https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-09-29T21:14:53.081Z

class Solution {
public:
    int longestSubstring(string s, int k) {

        int ans = 0;

        for (int target = 1; target <= 26; target++) {

            vector<int> hash(26, 0);

            int l = 0;
            int distinct = 0;
            int valid = 0;

            for (int r = 0; r < s.size(); r++) {

                int x = s[r] - 'a';

                if (hash[x] == 0)
                    distinct++;

                hash[x]++;

                if (hash[x] == k)
                    valid++;

                while (distinct > target) {

                    int y = s[l] - 'a';

                    if (hash[y] == k)
                        valid--;

                    hash[y]--;

                    if (hash[y] == 0)
                        distinct--;

                    l++;
                }

                if (distinct == target && valid == target)
                    ans = max(ans, r - l + 1);
            }
        }

        return ans;
    }
};