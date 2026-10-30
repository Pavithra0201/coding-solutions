CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
      with ranked as
      (
        select salary,
            DENSE_RANK() over
            (order by salary desc) as rnk
        from employee
      ) 

      select max(salary) as getNthHighestSalary
      from ranked
      where rnk=N

  );
END