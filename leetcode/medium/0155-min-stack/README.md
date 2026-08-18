# Min Stack

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the `MinStack` class:

- MinStack() initializes the stack object.
- void push(int value) pushes the element value onto the stack.
- void pop() removes the element on the top of the stack.
- int top() gets the top element of the stack.
- int getMin() retrieves the minimum element in the stack.

You must implement a solution with `O(1)` time complexity for each function.

 

 **Example 1:** 

```
Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output
[null,null,null,null,-3,null,0,-2]

Explanation
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2

```

 

 **Constraints:** 

- -231 <= val <= 231 - 1
- Methods pop, top and getMin operations will always be called on non-empty stacks.
- At most 3 * 104 calls will be made to push, pop, top, and getMin.

## Solution

**Language:** C++  
**Runtime:** 59 ms (beats 55.18%)  
**Memory:** 151.3 MB (beats 37.45%)  
**Submitted:** 2026-08-18T18:49:34.624Z  

```cpp
class MinStack {
public:
    MinStack() {
        
    }

    stack<int> s,minStack;
    
    void push(int value) {
        s.push(value);

        if(minStack.empty() || value <= minStack.top())
            minStack.push(value);



        
    }
    
    void pop() {

        if (s.top()==minStack.top()) minStack.pop();
        s.pop();
        
    }
    
    int top() {
        return s.top();
        
    }

  
    
    int getMin() {
        
        return minStack.top();

        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
```

---

[View on LeetCode](https://leetcode.com/problems/min-stack/)