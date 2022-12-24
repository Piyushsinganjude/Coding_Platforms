## Reverse words in a given string
Given a String S, reverse the string without reversing its individual words. Words are separated by dots.
Example 1:

Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i
Example 2:

Input:
S = pqr.mno
Output: mno.pqr
Explanation: After reversing the whole
string , the input string becomes
mno.pqr

```

## Solution 

```c++
class Solution{
public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        string ans = "",temp = "";
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i] == '.'){
                ans = ans + temp + ".";
                temp = "";
            }else{
                temp = s[i] + temp;
            }
        }
        if(temp.size()>0)
        ans = ans + temp;
        return ans;
    } 
};

```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


```
## gfg
[Reverse words in a given string](https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?page=1&category[]=Strings&sortBy=submissions)
