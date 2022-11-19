## Check if All Characters Have Equal Number of Occurrences
Given a string s, return true if s is a good string, or false otherwise.

A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).

 

Example 1:

Input: s = "abacbc"
Output: true
Explanation: The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.
Example 2:

Input: s = "aaabb"
Output: false
Explanation: The characters that appear in s are 'a' and 'b'.
'a' occurs 3 times while 'b' occurs 2 times, which is not the same number of times.
```

## Solution 

```cpp
class Solution {
public:
    bool areOccurrencesEqual(string s) {
      unordered_map<char,int>mp;
      int len = s.length();
      for(int i =0;i<len;i++)
      {
          mp[s[i]]++;
      }
      int val =mp[s[0]];
      for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second!=val)
            return false;

        }
        return true;

    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Check if All Characters Have Equal Number of Occurrences](https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/description/)
