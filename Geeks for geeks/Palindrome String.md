## Palindrome String
Given a string S, check if it is palindrome or not.

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome
Example 2:

Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome
```

## Solution 

```java
class Solution {
    int isPalindrome(String S) {
        int start=0;
        int end=S.length()-1;
        while(start<end)
        {
            if(S.charAt(start)!=S.charAt(end))
            {
                return 0;
            }
            start ++;
            end --;
        }
        return 1;
    }
```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


```
## gfg
[Palindrome String](https://practice.geeksforgeeks.org/problems/palindrome-string0817/1?page=1&category[]=Strings&sortBy=submissions)
