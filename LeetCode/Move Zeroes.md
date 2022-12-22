## Move Zeroes
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 
```c++
class Solution {
public:
   void moveZeroes(vector<int>& nums) {
    int zeros = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if(!nums[i]) zeros++;
            else {
                nums[i - zeros] = nums[i];
                if(zeros)
                    nums[i] = 0;
            }
        }
    }
};
#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[Move Zeroes](https://leetcode.com/problems/move-zeroes/description/)
