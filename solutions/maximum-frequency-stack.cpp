// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Maximum Frequency Stack
// URL        : https://leetcode.com/problems/maximum-frequency-stack/
// Difficulty : Hard
// Language   : cpp
// Saved at   : 2026-06-25T16:57:01.875Z

class FreqStack {
public:
    int cnt = 0;
    priority_queue<pair<int,pair<int,int>>> pq;
    unordered_map<int,int> mp;

    FreqStack() {}

    void push(int val) {
        ++mp[val];
        pq.push({mp[val], {cnt++, val}});
    }

    int pop() {
        while (true) {
            auto cur = pq.top();
            pq.pop();

            int freq = cur.first;
            int val = cur.second.second;

            if (mp[val] != freq)
                continue;

            mp[val]--;
            if (mp[val] == 0) mp.erase(val);

            return val;
        }
    }
};