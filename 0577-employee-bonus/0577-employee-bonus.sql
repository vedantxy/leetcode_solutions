# Write your MySQL query statement below
select v.name, b.bonus from 
Employee v  left join Bonus b on v.empId = b.empId where b.bonus < 1000 or  b.bonus is null;