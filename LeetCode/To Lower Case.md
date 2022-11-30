## To Lower Case
Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

 
## Example 
Example 1:

Input: s = "Hello"
Output: "hello"
Example 2:

Input: s = "here"
Output: "here"
Example 3:

Input: s = "LOVELY"
Output: "lovely"
```cpp
class Solution{

public:
    string toLowerCase(string s) {
       int i = 0;
       for(char x : s)
       {
           if(x>=65 && x<=90)
           {
               x += 32;
               s[i]=x;
           }
           i++;
       }
       return s;

    }
};
#### Complexity
```bash
Time Complexity :O(n)
Space Complexity : O(1)
```
## Leetcode
[To Lower Case](https://leetcode.com/problems/to-lower-case/description/)
