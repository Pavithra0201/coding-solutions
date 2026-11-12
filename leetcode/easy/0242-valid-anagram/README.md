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
**Runtime:** 3 ms (beats 43.85%)  
**Memory:** 9.9 MB (beats 21.72%)  
**Submitted:** 2026-11-12T07:17:56.802Z  

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        if(s.size()!=t.size())
            return false;

        for (int i=0;i<s.size();i++)
        {
            freq[s[i]]++;
        }

        for (int i=0;i<t.size();i++)
        {
            freq[t[i]]--;
        }

        for (auto it:freq)
        {
            if (it.second!=0)
                return false;
        }

        return true;
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-anagram/)