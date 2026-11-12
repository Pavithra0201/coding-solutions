# Perfect Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A  **perfect number**  is a  **positive integer**  that is equal to the sum of its  **positive divisors**, excluding the number itself. A  **divisor**  of an integer `x` is an integer that can divide `x` evenly.

Given an integer `n`, return `true` *if* `n` *is a perfect number, otherwise return* `false`.

 

Original
C++
 **Example 1:** 

```
Input: num = 28
Output: true
Explanation: 28 = 1 + 2 + 4 + 7 + 14
1, 2, 4, 7, and 14 are all divisors of 28.

```

 **Example 2:** 

```
Input: num = 7
Output: false

```

 

 **Constraints:** 

- 1 <= num <= 108

## Solution

**Language:** C++  
**Runtime:** 1071 ms (beats 41.56%)  
**Memory:** 7.5 MB (beats 89.65%)  
**Submitted:** 2026-11-12T16:55:40.236Z  

```cpp
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for (int i=1;i<=num/2;i++)
        {
            if (num % i==0) sum+=i;
        }
        return sum==num;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/perfect-number/)