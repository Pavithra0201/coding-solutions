# Valid Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.

 

 **Example 1:** 

 **Input:**  s = "()"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "()[]{}"

 **Output:**  true

 **Example 3:** 

 **Input:**  s = "(]"

 **Output:**  false

 **Example 4:** 

 **Input:**  s = "([])"

 **Output:**  true

 **Example 5:** 

 **Input:**  s = "([)]"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length <= 104
- s consists of parentheses only '()[]{}'.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 15.33%)  
**Memory:** 9 MB (beats 18.43%)  
**Submitted:** 2026-10-01T18:03:27.110Z  

```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<char> sym;
        
        for (int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='[')
                sym.push(ch);
            else
            {
                if (sym.empty()) return false;
            char top=sym.top();
            sym.pop();
            if ((ch==')' && top!='(')
                
                || (ch=='}' && top!='{')
               
                || (ch==']' && top!='[')) return false;
                
            }
            
           
        }

        return sym.empty();
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-parentheses/)