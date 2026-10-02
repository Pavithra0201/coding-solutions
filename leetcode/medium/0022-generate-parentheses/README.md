# Generate Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given `n` pairs of parentheses, write a function to  *generate all combinations of well-formed parentheses*.

 

 **Example 1:** 

```
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

```

 **Example 2:** 

```
Input: n = 1
Output: ["()"]

```

 

 **Constraints:** 

- 1 <= n <= 8

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 12.9 MB (beats 95.23%)  
**Submitted:** 2026-10-02T18:22:37.425Z  

```cpp
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;

        backtrack(n, 0, 0, s, ans);

        return ans;
    }

    void backtrack(int n, int open, int close,
                   string &s, vector<string> &ans) {

        // Complete valid combination
        if (s.length() == 2 * n) {
            ans.push_back(s);
            return;
        }

        // Add '('
        if (open < n) {
            s.push_back('(');
            backtrack(n, open + 1, close, s, ans);
            s.pop_back();
        }

        // Add ')'
        if (close < open) {
            s.push_back(')');
            backtrack(n, open, close + 1, s, ans);
            s.pop_back();
        }
    }
};
   
```

---

[View on LeetCode](https://leetcode.com/problems/generate-parentheses/)