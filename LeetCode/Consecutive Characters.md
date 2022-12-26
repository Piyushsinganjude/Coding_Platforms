## Consecutive Characters
The power of the string is the maximum length of a non-empty substring that contains only one unique character.

Given a string s, return the power of s.

 

Example 1:

Input: s = "leetcode"
Output: 2
Explanation: The substring "ee" is of length 2 with the character 'e' only.
Example 2:

Input: s = "abbcccddddeeeeedcba"
Output: 5
Explanation: The substring "eeeee" is of length 5 with the character 'e' only.
 
```

## Solution 

```c++
class Solution {
public:
   int maxPower(string s) {
        int tempCount= 1,maxCount=1,i=1;
        if(s.length()== 1) return 1;
        while(s[i] !='\0'){
            if(s[i-1]==s[i]) tempCount++;
            else tempCount=1;
            if(maxCount < tempCount) maxCount=tempCount;
            i++;
        }
        return maxCount;
    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


```
## leetcode
[Consecutive Characters](https://leetcode.com/problems/consecutive-characters/description/)
