## Find triplets with zero sum
Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero. 
 Example 1:

Input: n = 5, arr[] = {0, -1, 2, -3, 1}
Output: 1
Explanation: 0, -1 and 1 forms a triplet
with sum equal to 0.
Example 2:

Input: n = 3, arr[] = {1, 2, 3}
Output: 0
Explanation: No triplet with zero sum exists.
```

## Solution 

```cpp
class Solution{
public:
   

```
#### Complexity
```bash
Expected Time Complexity: O(N*N//Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
         sort(arr, arr+n);  
        for(int i=0; i<n;i++) {
            int j=i+1, k=n-1;  
            while(j<k)  {
                if(arr[i] +arr[j]+arr[k]==0) {
                    return true;  }
                else if(arr[i]+arr[j]+arr[k]>0)  {
                    k--; }
                else  {
                    j++; }
            }    
        }
    return false;
    }
};
Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(N)
```
## Gfg
[Find triplets with zero sum](https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1?page=1&category[]=Hash&sortBy=submissions)
