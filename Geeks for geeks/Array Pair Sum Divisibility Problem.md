## Array Pair Sum Divisibility Problem
Given an array of integers and a number k, write a function that returns true if given array can be divided into pairs such that sum of every pair is divisible by k.
 

Example 1 :

Input : arr = [9, 5, 7, 3], k = 6
Output: True
Explanation: {(9, 3), (5, 7)} is a 
possible solution. 9 + 3 = 12 is divisible
by 6 and 7 + 5 = 12 is also divisible by 6.

Example 2:

Input : arr = [2, 4, 1, 3], k = 4
Output: False
Explanation: There is no possible solution.
```

## Solution 

```c++
    class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int,int> mp;
        // storing remainder
        for(auto x : nums)
            mp[x%k]++;
            
        // if no of 0 is odd return false 
        // i.e. we can't make pair
        if(mp[0]%2 != 0) 
            return false;
        mp.erase(0);
        
        for(auto x : mp)
        {
            // if rem ! = k - rem mean we can't make pair
            if(mp[x.first] != mp[k-x.first])
                return false;
        }
        return true;
    }
};

```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


```
## gfg
[Array Pair Sum Divisibility Problem](https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1?page=1&difficulty[]=0&category[]=Hash&curated[]=1&sortBy=submissions)
