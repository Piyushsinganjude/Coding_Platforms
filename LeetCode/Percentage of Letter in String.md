##  Percentage of Letter in String
Given a string s and a character letter, return the percentage of characters in s that equal letter rounded down to the nearest whole percent.
## Example 
Example 1:

Input: s = "foobar", letter = "o"
Output: 33
Explanation:
The percentage of characters in s that equal the letter 'o' is 2 / 6 * 100% = 33% when rounded down, so we return 33.
Example 2:

Input: s = "jjjj", letter = "k"
Output: 0
Explanation:
The percentage of characters in s that equal the letter 'k' is 0%, so we return 0.
```cpp
class Solution{

public:
   int percentageLetter(string s, char l) {
        int cnt = 0;
        for(int i =0;i<s.size();i++)
        {
            if(s[i]==l)
            {
                cnt++;
            }
        }
        return (cnt*100)/s.size();
    }
};
#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[ Percentage of Letter in String](https://leetcode.com/problems/percentage-of-letter-in-string/description/)
