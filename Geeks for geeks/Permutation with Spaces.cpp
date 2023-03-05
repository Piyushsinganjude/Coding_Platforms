class Solution{
public:
void rec(int i,string str,vector<string>&res,string S)
{
    if(i==S.size()-1)
    {
        str+=S[i];
        res.push_back(str);
        return;
    }
    rec(i+1,str+S[i]+" ",res,S);
    rec(i+1,str+S[i],res,S);
}




    vector<string> permutation(string S){
        vector<string> res;
        string str ="";
        rec(0,str,res,S);
        return res;
    }
};
Link = (https://practice.geeksforgeeks.org/problems/permutation-with-spaces3627/1?page=1&difficulty[]=0&category[]=Recursion&sortBy=submissions)
