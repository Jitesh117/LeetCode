# Write your MySQL query statement below
select employeeUni.unique_id, employees.name 
from employees
left join employeeUni
on employees.id = employeeUni.id;