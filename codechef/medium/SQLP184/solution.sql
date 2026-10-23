-- your code goes here
select s.singer_name,count(f.singer_id) as Count
from singer s
join follower f on s.singer_id=f.singer_id
group by f.singer_id
having count(f.singer_id) >2
;