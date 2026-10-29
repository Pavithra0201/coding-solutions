# Max Consecutive Ones

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a binary array `nums`, return  *the maximum number of consecutive* `1` *'s in the array*.

 

 **Example 1:** 

```
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

```

 **Example 2:** 

```
Input: nums = [1,0,1,1,0,1]
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- nums[i] is either 0 or 1.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 50.2 MB (beats 65.37%)  
**Submitted:** 2026-10-29T11:03:37.000Z  

```cpp
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ct=0;
        int ans=0;
        for (int num:nums)
        {
            if (num==1)
                {
                    ct++;
                    ans=max(ans,ct);
                }
            else ct=0;
            
            
            
        }

        return ans;
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/max-consecutive-ones/)