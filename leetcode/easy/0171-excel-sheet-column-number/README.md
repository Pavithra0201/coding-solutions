# Excel Sheet Column Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `columnTitle` that represents the column title as appears in an Excel sheet, return  *its corresponding column number*.

For example:

```
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...

```

 

Original
C++
 **Example 1:** 

```
Input: columnTitle = "A"
Output: 1

```

 **Example 2:** 

```
Input: columnTitle = "AB"
Output: 28

```

 **Example 3:** 

```
Input: columnTitle = "ZY"
Output: 701

```

 

 **Constraints:** 

- 1 <= columnTitle.length <= 7
- columnTitle consists only of uppercase English letters.
- columnTitle is in the range ["A", "FXSHRXW"].

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.6 MB (beats 58.29%)  
**Submitted:** 2026-11-25T05:32:52.697Z  

```cpp
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int output=0;
        for (int i=0;i<columnTitle.size();i++)
        {
            char c=columnTitle[i];
            int val=c-'A'+1;

            output=output*26+val;

        }
        return output;
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/excel-sheet-column-number/)