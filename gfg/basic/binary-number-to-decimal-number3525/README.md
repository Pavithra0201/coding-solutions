# Binary to Decimal

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a string  **b** representing a binary number, return its decimal equivalent as an integer.

 **Examples:** 

```
Input : b = 111
Output : 7
Explanation : The decimal equivalent of the binary number 111 is 22 + 21 + 20 = 7.
```

```
Input : b = 1010
Output : 10
Explanation : The decimal equivalent of the binary number 1010 is 23 + 21 = 10.
```

```
Input: b = 100001
Output: 33
Explanation : The decimal equivalent of the binary number 100001 is 25 + 20 = 33.
```

 **Constraints:** 
1 <= number of bits in binary number  <= 16

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-11T17:04:32.344Z  

```cpp
class Solution {
  public:
    int binaryToDecimal(string& b) {
        // code here
        int ans=0;
        int k=0;
        for (int i=b.length()-1;i>=0;i--)
        {
            ans+=(b[i]-'0') * pow(2,k);
            k++;
        }
        
        return ans;
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/1)