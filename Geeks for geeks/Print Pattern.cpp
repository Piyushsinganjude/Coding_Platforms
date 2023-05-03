class Solution{
public:
    vector<int>v;
    vector<int> pattern(int N){
        v.push_back(N);
        if(N<=0)
        {
            return v;
        }
        pattern(N-5);
        v.push_back(N);
        return v;
    }
};
LINK = (https://practice.geeksforgeeks.org/problems/print-pattern3549/1?page=2&category[]=Recursion&sortBy=submissions)
