## Fibonacci Number
The Fibonacci numbers, commonly denoted F(n) form a sequence called the Fibonacci sequence such that each number is the sum of the two preceding ones starting from 0 and 1. That is:

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

 

Example 1:

Input is : n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
Example 2:

Input is: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
```

## Solution 

```c++
class Solution{
public:
   int fib(int n) {
        return n<=1 ? n : fib(n-1) + fib (n-2);
    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)


```
## leetcode
[Fibonacci Number](https://leetcode.com/problems/fibonacci-number/description/)
