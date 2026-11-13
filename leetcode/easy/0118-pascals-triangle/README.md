# Pascal's Triangle

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer `numRows`.

Return the first `numRows` of  **Pascal's triangle**.

In  **Pascal's triangle**, each number is the sum of the two numbers directly above it and the first and last number on each row must be equal to 1, as shown below:

 

Original
C++
 **Example 1:** 

```
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

```

 **Example 2:** 

```
Input: numRows = 1
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= numRows <= 30

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.4 MB (beats 97.21%)  
**Submitted:** 2026-11-13T14:50:55.969Z  

```cpp
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i=0;i<numRows;i++)
        {
            vector<int> row(i+1,1);

            for(int j=1;j<i;j++)
            {
                
                row[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(row);
        }

        return ans;
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/pascals-triangle/)