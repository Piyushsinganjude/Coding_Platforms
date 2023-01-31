##   Fizz Buzz
Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
 
Example 1:
Input: n = 3
Output: ["1","2","Fizz"]
Example 2:

Input: n = 5
Output: ["1","2","Fizz","4","Buzz"]

```cpp
class Solution {
 public:
    vector<string> fizzBuzz(int n) {
        vector<string> result(n," ");
        for(int i =1;i<n+1;++i){
            if(i % 15 == 0) result[i-1] = "FizzBuzz";
            else if (i % 3 == 0) result[i-1] = "Fizz";
            else if (i % 5 == 0) result[i-1] = "Buzz";
            else result[i-1] = to_string(i);
        }
        return result;

    }
};
 
#### Complexity
```bash
Time Complexity :O(N)
Space Complexity : O(1)
```
## Leetcode
[ Fizz Buzz](https://leetcode.com/problems/fizz-buzz/description/)
