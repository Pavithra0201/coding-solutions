# Contains Duplicate II

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums` and an integer `k`, return `true`  *if there are two  **distinct indices*** `i` *and* `j` *in the array such that* `nums[i] == nums[j]` *and* `abs(i - j) <= k`.

 

 **Example 1:** 

```
Input: nums = [1,2,3,1], k = 3
Output: true

```

 **Example 2:** 

```
Input: nums = [1,0,1,1], k = 1
Output: true

```

 **Example 3:** 

```
Input: nums = [1,2,3,1,2,3], k = 2
Output: false

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109
- 0 <= k <= 105

## Solution

**Language:** C++  
**Runtime:** 126 ms (beats 18.28%)  
**Memory:** 134.2 MB (beats 18.66%)  
**Submitted:** 2026-08-30T18:32:08.277Z  

```cpp
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> st;
        int left=0;
        int ans;
        for (int right=0;right<nums.size();right++)
        {
            if(st.count(nums[right]))
            {
               return true;
            }
            st.insert(nums[right]);

            if(right -left ==k)
            {
                st.erase(nums[left]);
                left++;
            }
        }

        return false;

        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/contains-duplicate-ii/)