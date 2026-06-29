// Solved with GitSolve AI
// Platform   : gfg
// Problem    : Meeting Rooms II
// URL        : https://www.geeksforgeeks.org/problems/attend-all-meetings-ii/1
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-06-29T16:42:18.039Z

class Solution {
  public:
    int minMeetingRooms(vector<int>& start, vector<int>& end) {
    int ans = -1;
    int count = 0;
    map<int,int> mp;
    
    for(int i = 0 ; i< start.size() ; i++){
        mp[start[i]]++;
        mp[end[i]]--;
    }
    
    for(auto i:mp){
      count += i.second;
      ans = max(ans , count);
    }
    
    return ans;
}

};
