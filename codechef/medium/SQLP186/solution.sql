-- your code goes here
select u.user_name,count(f.singer_id) as Total_count
from follower f
join user u on u.user_id=f.user_id
group by u.user_id;