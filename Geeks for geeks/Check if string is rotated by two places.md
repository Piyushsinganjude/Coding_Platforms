## Check if string is rotated by two places
Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.

Example 1:

Input:
a = amazon
b = azonam
Output: 1
Explanation: amazon can be rotated anti
clockwise by two places, which will make
it as azonam.
Example 2:

Input:
a = geeksforgeeks
b = geeksgeeksfor
Output: 0
Explanation: If we rotate geeksforgeeks by
two place in any direction , we won't get
geeksgeeksfor.

## Solution 

```c++
class Solution{
public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
    // Your code here

        if(str1.size()!=str2.size())
            return false;
            else if(str1.size()==1)
            {
                str1[0]!=str2[0];

                return false;
            }
        int n=str1.size();
        str1=str1+str1;
        int found=str1.find(str2);
        if(found==2||found==n-2) 
            return true;
        return false;
    }
    };


```
#### Complexity
```bash
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


```
## gfg
[Check if string is rotated by two places](https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1?page=1&difficulty[]=0&category[]=Strings&sortBy=submissions)
