##  Uncommon Words from Two Sentences
A sentence is a string of single-space separated words where each word consists only of lowercase letters.

A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.

Given two sentences s1 and s2, return a list of all the uncommon words. You may return the answer in any order.

 
```bash 
xample 1:

Input: s1 = "this apple is sweet", s2 = "this apple is sour"
Output: ["sweet","sour"]
Example 2:

Input: s1 = "apple apple", s2 = "banana"
Output: ["banana"]
```

## Solution 

```cpp
  class Solution {
public:
    void uncommon(string s,unordered_map<string,int>&mp) {
        string word="";
        for(int i=0; i<s.size(); i++) {
                if(s[i]==' ') {
                     mp[word]++;
                     word="";
                }else {
                     word+=s[i];
                }
        }
        mp[word]++;
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        unordered_map<string,int> mp;
        uncommon(s1,mp);
        uncommon(s2,mp);
        for(pair<string,int> p : mp) {
            if(p.second==1) ans.push_back(p.first);
        }
        return ans;
    }
};
```
#### Complexity
```bash
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
```
## leetcode
[Uncommon Words from Two Sentences](https://leetcode.com/problems/uncommon-words-from-two-sentences/description/)
