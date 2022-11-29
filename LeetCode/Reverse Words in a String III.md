##   Reverse Words in a String III
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 
 
Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "God Ding"
Output: "doG gniD"

```cpp
class Solution {
 public:
    string reverseWords(string s) {
    int i=0;
        
          for(int j=0; j<s.size(); j++)
          {
              if(s[j] == ' ')
              {
                  reverse(s.begin()+i, s.begin()+j);
                  i = j+1;
              }
          }
        
        reverse(s.begin()+i,s.end());
        
        return s;
    }
};
 
#### Complexity
```bash
Time Complexity :O(N)
Space Complexity : O(1)
```
## Leetcode
[Reverse Words in a String III](https://leetcode.com/problems/reverse-words-in-a-string-iii/description/)
