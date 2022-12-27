## Relative Sort Array
Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.

Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2. Elements that do not appear in arr2 should be placed at the end of arr1 in ascending order.

 
```bash 
Example 1:

Input: arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
Output: [2,2,2,1,4,3,3,9,6,7,19]
Example 2:

Input: arr1 = [28,6,22,8,44,17], arr2 = [22,28,8,6]
Output: [22,28,8,6,17,44]
 
```

## Solution 

```cpp
class Solution {
public:
  vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> m;
        int idx=0;
        for(auto& a:arr1) m[a]++;
        for(auto& b:arr2){
            if(m[b]>0){
                for(int i=0;i<m[b];i++) arr1[idx+i]=b;
                idx+=m[b];
                m[b]=0;
            }
        }
        auto it=m.begin();
        while(it!=m.end()){
            if(it->second!=0){
                for(int i=0;i<it->second;i++) arr1[idx+i]=it->first;
                idx+=it->second;
                it->second=0;
            }
            ++it;
        }
        return arr1; 
    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Relative Sort Array](https://leetcode.com/problems/relative-sort-array/description/)
