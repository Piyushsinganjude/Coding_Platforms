## Reverse Only Letters
Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.

Example 1:

Input: s = "ab-cd"
Output: "dc-ba"
Example 2:

Input: s = "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"
Example 3:

Input: s = "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"
```

## Solution 

```c++
class Solution {
public:
    string reverseOnlyLetters(string S) {
        int i = 0,j = S.size()-1;
        while(i < j){
            while(i < j && !isalpha(S[i])) i++;
            while(j >= 0 && !isalpha(S[j])) j--;
            if( i > j) break;
            swap (S[i++], S[j--]);
        }
     return S;   
    }
};

```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


```
## gfg
[Reverse Only Letters](https://leetcode.com/problems/reverse-only-letters/description/)
