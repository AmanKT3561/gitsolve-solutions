// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Confirmation Rate
// URL        : https://leetcode.com/problems/confirmation-rate/
// Difficulty : Medium
// Language   : mysql
// Saved at   : 2026-06-26T11:47:57.536Z

# Write your MySQL query statement below
select s.user_id, round(avg(if(c.action="confirmed",1,0)),2) as confirmation_rate
from Signups as s left join Confirmations as c on s.user_id= c.user_id group by user_id;

