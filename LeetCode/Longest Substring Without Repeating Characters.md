##  Longest Substring Without Repeating Characters
Given a string s, find the length of the longest 
substring
 without repeating characters.
## Example 
Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>Set;
        int start= 0;
        int end = 0;
        int Max = 0;

        while(start<s.size())
        {
            auto it = Set.find(s[start]);
            
            if(it == Set.end())
            {
                if(start-end+1>Max)
                Max = start-end+1;
                Set.insert(s[start]);
                start++;
            }
            else
            {
                Set.erase(s[end]);
                end++;
            }
        }
        return Max;
    }
};
 
#### Complexity
```bash
Time Complexity :O(N)
Space Complexity : O(1)
```
## Leetcode
[ Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)
