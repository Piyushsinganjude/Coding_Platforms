##  N-Repeated Element in Size 2N Array
You are given an integer array nums with the following properties:

nums.length == 2 * n.
nums contains n + 1 unique elements.
Exactly one element of nums is repeated n times.
Return the element that is repeated n times.
```bash 
Example 1:

Input: nums = [1,2,3,3]
Output: 3
Example 2:

Input: nums = [2,1,2,5,3,2]
Output: 2
Example 3:

Input: nums = [5,1,5,2,5,3,5,4]
Output: 5

```

## Solution 

```cpp
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int,int>mp;
        for(int i =0;i<n;i++)
         mp[nums[i]]++;
         for(auto i:mp){
             if(i.second>=n/2)
             return i.first;
         }
         return 0;
    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(N)
```
## leetcode
[ N-Repeated Element in Size 2N Array](https://leetcode.com/problems/n-repeated-element-in-size-2n-array/description/)
