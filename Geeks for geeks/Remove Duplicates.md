## Remove Duplicates
Given a string without spaces, the task is to remove duplicates from it.

Note: The original order of characters must be kept the same. 

Example 1:

Input: S = "zvvo"
Output: "zvo"
Explanation: Only keep the first
occurrence
Example 2:

Input: S = "gfg"
Output: gf
Explanation: Only keep the first
occurrence
```

## Solution 

```c++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    string out = "";
	    int count[26] = {0};
	    int len = S.length();
	    for(int i =0;i<len;i++){
	        if(S[i] >= 'a' && S[i] <='z')
	        if(count [S[i] - 'a']++ ==0)
	        out = out + S[i];
	       else if(S[i] >= 'A' && S[i] <='Z')
	       if(count [S[i] - 'A']++ == 0)
	       out = out + S[i];
	    }
	    return out;
	}
};

```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


```
## gfg
[Remove Duplicates](https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1?page=1&difficulty[]=0&category[]=Strings&sortBy=submissions)
