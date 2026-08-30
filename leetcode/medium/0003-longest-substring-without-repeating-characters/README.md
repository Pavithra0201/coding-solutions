# Longest Substring Without Repeating Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, find the length of the  **longest**   **substring**  without duplicate characters.

 

 **Example 1:** 

```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

```

 **Example 2:** 

```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

```

 **Example 3:** 

```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

```

 

 **Constraints:** 

- 0 <= s.length <= 105
- s consists of English letters, digits, symbols and spaces.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8 MB  
**Submitted:** 2026-08-30T18:10:19.858Z  

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length()==1) return 1;

        unordered_set<char> str;
         int ans=-1;
        int j=0;
        
        for (int i=0;i<s.length();i++)
        {
            while(str.count(s[i]))
            {
                str.erase(s[j]);
                j++;
            }

            str.insert(s[i]);

            ans=max(ans,(i-j)+1);
                
                
             
            
        }

        
        return ans;
        
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)