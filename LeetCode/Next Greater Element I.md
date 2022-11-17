## Next Greater Element I
The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.
```bash 
Example 1:

Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
Example 2:

Input: nums1 = [2,4], nums2 = [1,2,3,4]
Output: [3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 2 is underlined in nums2 = [1,2,3,4]. The next greater element is 3.
- 4 is underlined in nums2 = [1,2,3,4]. There is no next greater element, so the answer is -1.
```

## Solution 

```cpp
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
          map<int,int> mp;
          for(int i =0;i<nums2.size();i++) mp[nums2[i]] = i;
          vector<int> ans;
          for(int i =0;i<nums1.size();i++){
          int id = mp[nums1[i]] , fl=1;
          for(int j = id;j<nums2.size();j++){
          if(nums2[j]>nums1[i]){
              ans.push_back(nums2[j]);
              fl = 0;
              break;
              
          }
          

        }
        if(fl) ans.push_back(-1);
     }
     return ans;
    }
};

```
#### Complexity
```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/description/)
