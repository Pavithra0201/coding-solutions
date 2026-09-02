# Longest Harmonious Subsequence

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

We define a harmonious array as an array where the difference between its maximum value and its minimum value is  **exactly**  `1`.

Given an integer array `nums`, return the length of its longest harmonious subsequence among all its possible subsequences.

 

 **Example 1:** 

 **Input:**  nums = [1,3,2,2,5,2,3,7]

 **Output:**  5

 **Explanation:** 

The longest harmonious subsequence is `[3,2,2,2,3]`.

 **Example 2:** 

 **Input:**  nums = [1,2,3,4]

 **Output:**  2

 **Explanation:** 

The longest harmonious subsequences are `[1,2]`, `[2,3]`, and `[3,4]`, all of which have a length of 2.

 **Example 3:** 

 **Input:**  nums = [1,1,1,1]

 **Output:**  0

 **Explanation:** 

No harmonic subsequence exists.

 

 **Constraints:** 

- 1 <= nums.length <= 2 * 104
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 39 ms (beats 26.27%)  
**Memory:** 44 MB (beats 39.19%)  
**Submitted:** 2026-09-02T15:00:04.636Z  

```cpp
class Solution {
public:
    int findLHS(vector<int>& nums) {
        int count=INT_MIN;

        unordered_map<int,int> freq;

        for (int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }

        int ans=0;

        for (auto& [x,count]:freq)
        {
            if (freq.find(x+1)!= freq.end())
                ans=max(ans,count+freq[x+1]);
        }
       
        return ans;
 
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-harmonious-subsequence/)