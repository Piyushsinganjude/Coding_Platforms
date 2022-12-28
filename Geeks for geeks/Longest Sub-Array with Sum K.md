## Longest Sub-Array with Sum K
Given an array containing N integers and an integer K., Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value K.

 

Example 1:
 

Input :
A[] = {10, 5, 2, 7, 1, 9}
K = 15
Output : 4
Explanation:
The sub-array is {5, 2, 7, 1}.
Example 2:

Input : 
A[] = {-1, 2, 3}
K = 6
Output : 0
Explanation: 
There is no such sub-array with sum 6.
```

## Solution 

```c++
class Solution{
public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        // Complete the function
        //prefix sum
       int sum = 0;
       int size = 0, max_size = 0;
       unordered_map<int, int> mp;
       mp.insert({0, -1});
       for(int i=0; i<n; i++)
       {
           sum += arr[i];
           if(mp.find(sum - k) != mp.end())
           {
               size = i - mp[sum - k];
               max_size = max(max_size, size);
           }
           mp.insert({sum, i});
       }
       return max_size;
       
    } 

};
 

```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)


```
## gfg
[Longest Sub-Array with Sum K](https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?page=1&category[]=Hash&sortBy=submissions)
