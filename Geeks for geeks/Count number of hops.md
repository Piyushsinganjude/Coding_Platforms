## Count number of hops
A frog jumps either 1, 2, or 3 steps to go to the top. In how many ways can it reach the top. As the answer will be large find the answer modulo 1000000007.
Example 1:

Input:
N = 1
Output: 1
Example 2:

Input:
N = 4
Output: 7
Explanation:Below are the 7 ways to reach
4
1 step + 1 step + 1 step + 1 step
1 step + 2 step + 1 step
2 step + 1 step + 1 step
1 step + 1 step + 2 step
2 step + 2 step
3 step + 1 step
1 step + 3 step
```

## Solution 

```c++
class Solution{
public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        long long ans[n+1];
        ans[0]=1;
        ans[1]=1;
        ans[2]=2;
        for(int i =3;i<=n;i++)
        {
            ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
            ans[i]%=1000000007;
        }
        return ans[n];
        
    }
};

```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)


```
## gfg
[Count number of hops](https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1?page=1&difficulty[]=0&category[]=Dynamic%20Programming&sortBy=submissions)
