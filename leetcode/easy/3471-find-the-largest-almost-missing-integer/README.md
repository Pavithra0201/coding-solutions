# Find the Largest Almost Missing Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` and an integer `k`.

An integer `x` is  **almost missing**  from `nums` if `x` appears in  *exactly*  one subarray of size `k` within `nums`.

Return the  **largest**   **almost missing**  integer from `nums`. If no such integer exists, return `-1`.

A  **subarray**  is a contiguous sequence of elements within an array.

 

 **Example 1:** 

 **Input:**  nums = [3,9,2,1,7], k = 3

 **Output:**  7

 **Explanation:** 

- 1 appears in 2 subarrays of size 3: [9, 2, 1] and [2, 1, 7].
- 2 appears in 3 subarrays of size 3: [3, 9, 2], [9, 2, 1], [2, 1, 7].
- 3 appears in 1 subarray of size 3: [3, 9, 2].
- 7 appears in 1 subarray of size 3: [2, 1, 7].
- 9 appears in 2 subarrays of size 3: [3, 9, 2], and [9, 2, 1].

We return 7 since it is the largest integer that appears in exactly one subarray of size `k`.

 **Example 2:** 

 **Input:**  nums = [3,9,7,2,1,7], k = 4

 **Output:**  3

 **Explanation:** 

- 1 appears in 2 subarrays of size 4: [9, 7, 2, 1], [7, 2, 1, 7].
- 2 appears in 3 subarrays of size 4: [3, 9, 7, 2], [9, 7, 2, 1], [7, 2, 1, 7].
- 3 appears in 1 subarray of size 4: [3, 9, 7, 2].
- 7 appears in 3 subarrays of size 4: [3, 9, 7, 2], [9, 7, 2, 1], [7, 2, 1, 7].
- 9 appears in 2 subarrays of size 4: [3, 9, 7, 2], [9, 7, 2, 1].

We return 3 since it is the largest and only integer that appears in exactly one subarray of size `k`.

 **Example 3:** 

 **Input:**  nums = [0,0], k = 1

 **Output:**  -1

 **Explanation:** 

There is no integer that appears in only one subarray of size 1.

 

 **Constraints:** 

- 1 <= nums.length <= 50
- 0 <= nums[i] <= 50
- 1 <= k <= nums.length

## Solution

**Language:** C++  
**Runtime:** 7 ms (beats 35.34%)  
**Memory:** 32.8 MB (beats 8.65%)  
**Submitted:** 2026-08-18T10:27:01.293Z  

```cpp
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>freq;

        unordered_set<int>SubArray;

        for (int i=0;i<=nums.size()-k;i++)
        {
            unordered_set<int>SubArray;

            for (int j=i;j< i+k;j++)
            {
                SubArray.insert(nums[j]);
            }

            for (int x:SubArray)
            {
                freq[x]++;
            }

        }
        int ans=-1;
        

        for (auto x=freq.begin();x!=freq.end();x++)
        {
            if (x->second ==1)
                ans=max(ans,x->first);

        }

        return ans;

        }

        
    
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-the-largest-almost-missing-integer/)