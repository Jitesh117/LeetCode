# Write your MySQL query statement below
SELECT a.Name as Employee
FROM EMPLOYEE as a,
     EMPLOYEE as b
WHERE
    a.ManagerId = b.Id and a.Salary > b.salary;