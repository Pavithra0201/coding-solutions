# Second Highest Salary

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Table: `Employee`

```
+-------------+------+
| Column Name | Type |
+-------------+------+
| id          | int  |
| salary      | int  |
+-------------+------+
id is the primary key (column with unique values) for this table.
Each row of this table contains information about the salary of an employee.

```

 

Write a solution to find the second highest  **distinct**  salary from the `Employee` table. If there is no second highest salary, return `null (return None in Pandas)`.

The result format is in the following example.

 

 **Example 1:** 

```
Input: 
Employee table:
+----+--------+
| id | salary |
+----+--------+
| 1  | 100    |
| 2  | 200    |
| 3  | 300    |
+----+--------+
Output: 
+---------------------+
| SecondHighestSalary |
+---------------------+
| 200                 |
+---------------------+

```

 **Example 2:** 

```
Input: 
Employee table:
+----+--------+
| id | salary |
+----+--------+
| 1  | 100    |
+----+--------+
Output: 
+---------------------+
| SecondHighestSalary |
+---------------------+
| null                |
+---------------------+

```

## Solution

**Language:** SQL  
**Runtime:** 308 ms (beats 43.98%)  
**Memory:** 0B (beats 100.00%)  
**Submitted:** 2026-10-30T06:58:32.742Z  

```sql
# Write your MySQL query statement below
with ranked as(
select salary,
    DENSE_RANK() OVER 
    (order by salary desc)
    as rnk

from employee)

select min(salary) as SecondHighestSalary
 from ranked
where rnk=2;

```

---

[View on LeetCode](https://leetcode.com/problems/second-highest-salary/)