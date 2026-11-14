# Longest Substring Without Repeating Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, find the length of the  **longest**   **substring**  without duplicate characters.

 

Original
C++
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
**Runtime:** 354 ms (beats 7.94%)  
**Memory:** 81.4 MB (beats 21.05%)  
**Submitted:** 2026-11-14T17:57:14.883Z  

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;

        int left=0,right=0,maxLen=0;
        while(right < s.size())
        {
            if (set.find(s[right]) == set.end())
            {
                set.insert(s[right]);
                maxLen=max(maxLen,right-left+1);
                right++;


            }

            else
            {
                set.erase(s[left]);
                left++;
            }
        }

        return maxLen;

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)