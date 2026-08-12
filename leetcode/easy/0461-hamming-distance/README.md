# Hamming Distance

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers `x` and `y`, return  *the  **Hamming distance**  between them*.

 

 **Example 1:** 

```
Input: x = 1, y = 4
Output: 2
Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑
The above arrows point to positions where the corresponding bits are different.

```

 **Example 2:** 

```
Input: x = 3, y = 1
Output: 1

```

 

 **Constraints:** 

- 0 <= x, y <= 231 - 1

 

 **Note:**  This question is the same as 2220: Minimum Bit Flips to Convert Number.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.8 MB (beats 68.33%)  
**Submitted:** 2026-08-12T18:36:49.028Z  

```cpp
class Solution {
public:
    int hammingDistance(int x, int y) {

        int ans=x^y;
        int count=0;
        while (ans>0)
        {
            count+=ans &1;
            ans =ans>>1;

        }
        return count;     
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/hamming-distance/)