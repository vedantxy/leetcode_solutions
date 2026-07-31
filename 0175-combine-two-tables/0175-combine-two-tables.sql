# Write your MySQL query statement below
select P.firstName , P.lastName , a.city , a.state from Person P left join Address a on P.personId = a.personId;