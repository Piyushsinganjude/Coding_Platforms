## Anagram
Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, act and tac are an anagram of each other.
Example 1

Input:a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same characters with
        same frequency. So, both are anagrams.
Example 2:

Input:a = allergy, b = allergic
Output: NO
Explanation: Characters in both the strings are 
        not same, so they are not anagrams.
```

## Solution 

```c++
class Solution{
public:
     //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string S1, string S2){
        int A[26] = {0};
        int B[26] = {0};
        int len1 = S1.length();
        int len2 = S2.length();
        int flag=0;
        if(len1 != len2)
        return false;
        for(int i =0;i<len1;i++){
            A[S1[i] - 'a']++;
            B[S2[i] - 'a']++;
        }
        for(int i=0;i<26;i++){
            if(A[i]!=B[i]){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
           return false;
         else 
          return true;
}
};

```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


```
## gfg
[Anagram](https://practice.geeksforgeeks.org/problems/anagram-1587115620/1?page=1&category[]=Strings&sortBy=submissions)
