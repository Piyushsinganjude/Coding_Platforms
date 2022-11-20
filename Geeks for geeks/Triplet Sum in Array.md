## Triplet Sum in Array
Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.
 
Example 1:

Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in 
the array sums up to 13.
Example 2:

Input:
n = 5, X = 10
arr[] = [1 2 4 3 6]
Output:
1
Explanation:
The triplet {1, 3, 6} in 
the array sums up to 10.
```

## Solution 

```java
class Solution{
public static boolean find3Numbers(int A[], int n, int X) { 
    
         for(int i =0;i<n-2;i++)
        {
            HashSet<Integer> set = new HashSet<>();
            int toFind=X-A[i];
            for(int j=i+1;j<n;j++)
            {
                if(set.contains(toFind-A[j]))
                {
                    return true;
                }
                set.add(A[j]);
            }
        }
        return false;
    
    }
}


```
#### Complexity
```bash
Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(1)


```
## gfg
[Triplet Sum in Array](https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1?page=1&category[]=Hash&sortBy=submissions)
