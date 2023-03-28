class Solution {
public:
    vector<int> diStringMatch(string s) {
       int max=s.length(),min=0,n=s.length();
        vector<int> res;
        for(int i=0;i<=n;i++){
            if(s[i]=='I'){
                res.push_back(min);
                min++;
            }else{
                res.push_back(max);
                max--;
            }
        }
        return res; 
    }
};
link = (https://leetcode.com/problems/di-string-match/description/)
