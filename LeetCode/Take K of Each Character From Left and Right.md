## Take K of Each Character From Left and Right
You are given a string s consisting of the characters 'a', 'b', and 'c' and a non-negative integer k. Each minute, you may take either the leftmost character of s, or the rightmost character of s.

Return the minimum number of minutes needed for you to take at least k of each character, or return -1 if it is not possible to take k of each character.
 

Example 1:

Input: s = "aabaaaacaabc", k = 2
Output: 8
Explanation: 
Take three characters from the left of s. You now have two 'a' characters, and one 'b' character.
Take five characters from the right of s. You now have four 'a' characters, two 'b' characters, and two 'c' characters.
A total of 3 + 5 = 8 minutes is needed.
It can be proven that 8 is the minimum number of minutes needed.
Example 2:

Input: s = "a", k = 1
Output: -1
Explanation: It is not possible to take one 'b' or 'c' so return -1.
```

## Solution 

```c++
   class Solution {
public:
    int takeCharacters(string s, int k) {
      int n = s.length();
      int aCnt = count(s.begin(),s.end(),'a');
      int bCnt = count(s.begin(),s.end(),'b');
      int cCnt = count(s.begin(),s.end(),'c');

      if(aCnt < k || bCnt < k || cCnt < k){
          return -1;
      }  
      int rem_aCnt = aCnt - k;
      int rem_bCnt = bCnt - k;
      int rem_cCnt = cCnt - k;

      aCnt = bCnt = cCnt = 0;

      int j =0 , mxSize = 0;
      for(int i =0;i<n;i++){
          aCnt += (s[i] == 'a');
          bCnt += (s[i] == 'b');
          cCnt += (s[i] == 'c');
          while(j <= i && (aCnt > rem_aCnt || bCnt > rem_bCnt || cCnt > rem_cCnt)){
              aCnt -=(s[j] == 'a');
              bCnt -= (s[j] == 'b');
              cCnt -= (s[j] == 'c');
              j++;
          }
          mxSize = max(mxSize, i - j + 1);
      }
      return n - mxSize;
    }
};

```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


```
## leetcode
[Take K of Each Character From Left and Right](https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/description/)
