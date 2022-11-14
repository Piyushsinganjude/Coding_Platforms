## Sum of Unique Elements
You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.
```bash 
Example 1:

Input: nums = [1,2,3,2]
Output: 4
Explanation: The unique elements are [1,3], and the sum is 4.
Example 2:

Input: nums = [1,1,1,1,1]
Output: 0
Explanation: There are no unique elements, and the sum is 0.
Example 3:

Input: nums = [1,2,3,4,5]
Output: 15
Explanation: The unique elements are [1,2,3,4,5], and the sum is 15.
```

## Solution 

```cpp
class Solution {
    public int sumOfUnique(int[] nums) {
        int [] counts = new int [101];
        int res =0;
        for(int n : nums) counts[n]++;

        for(int i =0;i<101;i++)
        {
            if(counts[i] == 1){
                res +=i;
            }
        }
        return res;
    }
}
```
#### Complexity
```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Sum of Unique Elements](https://leetcode.com/problems/sum-of-unique-elements/description/)
