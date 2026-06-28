// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : My Calendar I
// URL        : https://leetcode.com/problems/my-calendar-i/
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-06-28T11:58:59.175Z

class MyCalendar {
public:
    map<int,int>events;
    MyCalendar() {   
    }
    bool book(int start, int end) {
        auto next = events.upper_bound(start);
        if(next != events.end() &&   (*next).second < end)return false;
        events.insert({end,start});
        return true;
    }
};