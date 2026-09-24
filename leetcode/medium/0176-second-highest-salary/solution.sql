SELECT (
    SELECT salary
    FROM (
        SELECT salary,
               DENSE_RANK() OVER (ORDER BY salary DESC) AS rnk
        FROM Employee
    ) AS ranked
    WHERE rnk = 2
) AS SecondHighestSalary;