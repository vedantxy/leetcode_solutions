# Write your MySQL query statement below
SELECT
   project_id,round(sum(experience_years) /count(*),2)
   as average_years
FROM Project
JOIN Employee
ON Project.employee_id = Employee.employee_id
group by project_id;
