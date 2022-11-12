##  Isomorphic Strings
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
```bash 
Example 1:

Input: s = "egg", t = "add"
Output: true
Example 2:

Input: s = "foo", t = "bar"
Output: false
Example 3:

Input: s = "paper", t = "title"
Output: true
```

## Solution 

```cpp
class Solution {
public:
    bool isIsomorphic(string s, string t) {
         char map_s[128]={ 0 };
      char map_t[128]={ 0 };
      int len = s.size();
      for(int i =0; i<len;++i)
      {
          if(map_s[s[i]]!=map_t[t[i]]) return false;
          map_s[s[i]] = i+1;
          map_t[t[i]] = i+1;
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
[ Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/description/)
