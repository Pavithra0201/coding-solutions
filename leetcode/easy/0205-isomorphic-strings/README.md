# Isomorphic Strings

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `t`,  *determine if they are isomorphic*.

Two strings `s` and `t` are isomorphic if the characters in `s` can be replaced to get `t`.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Original
C++
 **Example 1:** 

 **Input:**  s = "egg", t = "add"

 **Output:**  true

 **Explanation:** 

The strings `s` and `t` can be made identical by:

- Mapping 'e' to 'a'.
- Mapping 'g' to 'd'.

 **Example 2:** 

 **Input:**  s = "f11", t = "b23"

 **Output:**  false

 **Explanation:** 

The strings `s` and `t` can not be made identical as `'1'` needs to be mapped to both `'2'` and `'3'`.

 **Example 3:** 

 **Input:**  s = "paper", t = "title"

 **Output:**  true

 

 **Constraints:** 

- 1 <= s.length <= 5 * 104
- t.length == s.length
- s and t consist of any valid ascii character.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 21.55%)  
**Memory:** 9.4 MB (beats 52.11%)  
**Submitted:** 2026-11-12T16:47:57.402Z  

```cpp
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;

        unordered_map<char,char> map1,map2;

        for (int i=0;i<s.size();i++)
        {
            char a=s[i],b=t[i];

            if (map1.count(a) && map1[a]!=b)
                return false;
            if (map2.count(b) && map2[b]!=a)
                return false;

        map1[a]=b;
        map2[b]=a;

        }

        return true;

        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/isomorphic-strings/)