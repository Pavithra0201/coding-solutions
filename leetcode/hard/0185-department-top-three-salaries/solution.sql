# Write your MySQL query statement below
with ranked as
(select  d.name as Department,
        e.name as Employee,
        e.salary as salary,
        DENSE_RANK() over
        ( 
             partition by e.departmentId
             order by e.salary DESC)
          as rnk
        from employee e

        join department d on
        d.id=e.departmentId
)

select department,employee,salary
from ranked
where  rnk<=3;