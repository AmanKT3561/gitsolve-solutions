// Solved with GitSolve AI
// Platform   : gfg
// Problem    : Minimum Swaps to Sort
// URL        : https://www.geeksforgeeks.org/problems/minimum-swaps/1
// Difficulty : Medium
// Language   : cpp
// Saved at   : 2026-10-17T21:06:10.960Z

class Solution {
  public:
int minSwaps(vector<int>& arr) {
     
       vector<int>t = arr;
       sort(t.begin(),t.end());
       unordered_map<int,int>mp;
       for(int i=0;i<arr.size();i++){
           mp[arr[i]]=i;
       }
       int c = 0;
       int i=0;
       while(i<arr.size()){
           if(arr[i]!=t[i]){
               int temp = mp[t[i]];
               mp[t[i]] = i;
               mp[arr[i]] = temp;
               swap(arr[i],arr[temp]);
               c++;
           }
           i++;
       }
       return c;

   }};