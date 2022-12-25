## Reverse a String
You are given a string s. You need to reverse the string.

Example 1:

Input:
s = Geeks
Output: skeeG
Example 2:

Input:
s = for
Output: rof
```

## Solution 

```c++
string reverseWord(string str){
    int i =0;
    int j = str.length()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return str;
}

```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


```
## gfg
[Reverse a String](https://practice.geeksforgeeks.org/problems/reverse-a-string/1?page=1&category[]=Strings&sortBy=submissions)
