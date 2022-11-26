##  Ransom Note
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.
Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true
## Example 

```java
class Solution {
 public boolean canConstruct(String ransomNote, String magazine) {
        int arr[]=new int [26];

        for(char ch:magazine.toCharArray())
        arr[ch-'a']++;

        for(char ch:ransomNote.toCharArray())
        {
            if(arr[ch-'a']==0)
            return false;
            arr[ch-'a']--;
        }
        return true;
    }
}
 
 
#### Complexity
```bash
Time Complexity :O(N)
Space Complexity : O(1)
```
## Leetcode
[Ransom Note](https://leetcode.com/problems/ransom-note/description/)
