// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Number of Submatrices That Sum to Target
// URL        : https://leetcode.com/problems/number-of-submatrices-that-sum-to-target/
// Difficulty : Hard
// Language   : cpp
// Saved at   : 2026-07-14T19:19:48.351Z

class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                dp[r + 1][c + 1] =
                    matrix[r][c] + dp[r][c + 1] + dp[r + 1][c] - dp[r][c];
            }
        }

        int count = 0;

        for (int sR = 0; sR < m; sR++) {
            for (int sC = 0; sC < n; sC++) {
                for (int eR = sR; eR < m; eR++) {
                    for (int eC = sC; eC < n; eC++) {

                        int sum = dp[eR + 1][eC + 1] + dp[sR][sC] -
                                  dp[eR + 1][sC] - dp[sR][eC + 1];

                        if (sum == target)
                            count++;
                    }
                }
            }
        }

        return count;
    }
};