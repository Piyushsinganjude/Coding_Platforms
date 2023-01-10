## Nth catalan number

Given a number N. The task is to find the Nth catalan number.
The first few Catalan numbers for N = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …
Note: Positions start from 0 as shown above.

## Example 1:

Input:
N = 5
Output: 42
## Example 2:

Input:
N = 4
Output: 14
```

## Solution 

```c++
//User function template for C++


class Solution
{
    public:
    //Function to find the nth catalan number.
    cpp_int findCatalan(int n) 
    {
        vector<cpp_int> dp(n+1);
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= n; i++) 
            for(int j = 1; j <= i; j++)
                dp[i] += dp[j-1] * dp[i-j];
        return dp[n];
    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)


```
## gfg
[Nth catalan number](https://practice.geeksforgeeks.org/problems/nth-catalan-number0817/1?page=1&difficulty[]=0&category[]=Dynamic%20Programming&sortBy=submissions)
