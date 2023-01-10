## Longest Palindromic Substring
Given a string s, return the longest palindromic substring in s.

 
 

## Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
## Example 2:

Input: s = "cbbd"
Output: "bb"
 
```

## Solution 

```c++
class Solution{
public:
 int check(string &s, int L, int R)
    {
        while(L>=0 and R<s.length() and s[L]==s[R])
        {
            L--;
            R++;
        }
        return R-L-1;
    }
    
    string longestPalindrome(string s) {
        
        int ans = 0, st=0;
        int n = s.length();
        
        for(int i = 0;i<n;i++)
        {
            int len1 = check(s, i,i);
            int len2 = check(s, i, i+1);
            
            int len = max(len1, len2);
            
            if(len> ans)
            {
                ans = len;
                st = i-(len-1)/2;
            }
        }
        return s.substr(st, ans);
    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)


```
## leetcode
[Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/description/)
