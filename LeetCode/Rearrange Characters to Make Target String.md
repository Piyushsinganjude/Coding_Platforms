##  Rearrange Characters to Make Target String
You are given two 0-indexed strings s and target. You can take some letters from s and rearrange them to form new strings.

Return the maximum number of copies of target that can be formed by taking letters from s and rearranging them.
## Example 
Example 1:

Input: s = "ilovecodingonleetcode", target = "code"
Output: 2
Explanation:
For the first copy of "code", take the letters at indices 4, 5, 6, and 7.
For the second copy of "code", take the letters at indices 17, 18, 19, and 20.
The strings that are formed are "ecod" and "code" which can both be rearranged into "code".
We can make at most two copies of "code", so we return 2.
Example 2:

Input: s = "abcba", target = "abc"
Output: 1
Explanation:
We can make one copy of "abc" by taking the letters at indices 0, 1, and 2.
We can make at most one copy of "abc", so we return 1.
Note that while there is an extra 'a' and 'b' at indices 3 and 4, we cannot reuse the letter 'c' at index 2, so we cannot make a second copy of "abc".
Example 3:

Input: s = "abbaccaddaeea", target = "aaaaa"
Output: 1
Explanation:
We can make one copy of "aaaaa" by taking the letters at indices 0, 3, 6, 9, and 12.
We can make at most one copy of "aaaaa", so we return 1.
```cpp
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
         map<char,int>mpp,mpp2;
         for(auto it: s) mpp[it]++;
         for(auto it:target) mpp2[it]++;
         int mini=INT_MAX;
         for(int i =0;i<target.size();i++) {
             if(mpp[target[i]]==0) return 0;
             else
             {
                 mini = min(mini,mpp[target[i]]/mpp2[target[i]]);
             }
         } 
         return mini;
    }
};

 
#### Complexity
```bash
Time Complexity :O(N)
Space Complexity : O(1)
```
## Leetcode
[Rearrange Characters to Make Target String](https://leetcode.com/problems/rearrange-characters-to-make-target-string/description/)
