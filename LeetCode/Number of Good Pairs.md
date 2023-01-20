## Number of Good Pairs
Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.
```bash 
Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
Example 2:

Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.
```

## Solution 

```cpp
class Solution {
public:
 int numIdenticalPairs(vector<int>& nums) {
        int sum =0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            sum +=mp[nums[i]]++;
        }
        return sum;
    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Number of Good Pairs](https://leetcode.com/problems/number-of-good-pairs/description/)
