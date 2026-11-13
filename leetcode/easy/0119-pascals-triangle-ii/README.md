# Pascal's Triangle II

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `rowIndex`, return the `rowIndexth` (**0-indexed**) row of the  **Pascal's triangle**.

In  **Pascal's triangle**, each number is the sum of the two numbers directly above it as shown:

 

Original
C++
 **Example 1:** 

```
Input: rowIndex = 3
Output: [1,3,3,1]

```

 **Example 2:** 

```
Input: rowIndex = 0
Output: [1]

```

 **Example 3:** 

```
Input: rowIndex = 1
Output: [1,1]

```

 

 **Constraints:** 

- 0 <= rowIndex <= 33

 

 **Follow up:**  Could you optimize your algorithm to use only `O(rowIndex)` extra space?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.1 MB (beats 19.97%)  
**Submitted:** 2026-11-13T15:10:43.469Z  

```cpp
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>nums;

        for (int i=0;i<=rowIndex;i++)
        {
            vector<int> s(i+1,1);

            for (int j=1;j<i;j++)
            {
                s[j]=nums[i-1][j-1]+nums[i-1][j];
            }

            nums.push_back(s);

            
        }

        return nums[rowIndex];
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/pascals-triangle-ii/)