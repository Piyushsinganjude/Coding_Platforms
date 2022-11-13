## Subarray with 0 sum
Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

 
Example 1:

Input:
5
4 2 -3 1 6

Output: 
Yes

Explanation: 
2, -3, 1 is the subarray 
with sum 0.
```

## Solution 

```cpp
class Solution{
public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
    unordered_map<int,int>mp;
      int pre = 0;
      mp[0]=1;
      for(int i =0;i<n;++i)
      {
          pre+=arr[i];
          if(mp[pre])
          {
              return true;
          }
          mp[pre]++;
      }
      return false;
    }
};

```
#### Complexity
```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
```
## gfg
[Subarray with 0 sum](https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1?page=1&difficulty[]=0&category[]=Hash&sortBy=submissions)
