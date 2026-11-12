# Valid Anagram

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

 

Original
C++
 **Example 1:** 

 **Input:**  s = "anagram", t = "nagaram"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "rat", t = "car"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length, t.length <= 5 * 104
- s and t consist of lowercase English letters.

 

 **Follow up:**  What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

## Solution

**Language:** C++  
**Runtime:** 5 ms (beats 26.60%)  
**Memory:** 9.6 MB (beats 90.13%)  
**Submitted:** 2026-11-12T07:15:25.228Z  

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s==t;
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-anagram/)