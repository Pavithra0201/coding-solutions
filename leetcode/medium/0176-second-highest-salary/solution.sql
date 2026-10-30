# Write your MySQL query statement below
with ranked as(
select salary,
    DENSE_RANK() OVER 
    (order by salary desc)
    as rnk

from employee)

select max(salary) as SecondHighestSalary
 from ranked
where rnk=2;
