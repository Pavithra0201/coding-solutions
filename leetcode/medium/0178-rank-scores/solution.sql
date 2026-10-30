# Write your MySQL query statement below
with ranked as(select score,
    DENSE_RANK() over 
    (order by score desc)
     as rnk
from scores)

select score,rnk as `rank`
from ranked;

