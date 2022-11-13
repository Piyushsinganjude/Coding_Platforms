## Intersection of Multiple Arrays
Given a 2D integer array nums where nums[i] is a non-empty array of distinct positive integers, return the list of integers that are present in each array of nums sorted in ascending order.
```bash 
Example 1:

Input: nums = [[3,1,2,4,5],[1,2,3,4],[3,4,5,6]]
Output: [3,4]
Explanation: 
The only integers present in each of nums[0] = [3,1,2,4,5], nums[1] = [1,2,3,4], and nums[2] = [3,4,5,6] are 3 and 4, so we return [3,4].
Example 2:

Input: nums = [[1,2,3],[4,5,6]]
Output: []
Explanation: 
There does not exist any integer present both in nums[0] and nums[1], so we return an empty list [].
```

## Solution 

```cpp
class Solution {
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
      map<int,int> mp;
        int n = 0;
        for(auto it: nums){
            for(auto x: it){
                mp[x]++;
            }
            n++;
        }
        vector<int> ans;
        for(auto it: mp){
            if(it.second == n){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};  
```
#### Complexity
```bash
Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Intersection of Multiple Arrays](https://leetcode.com/problems/intersection-of-multiple-arrays/description/)
