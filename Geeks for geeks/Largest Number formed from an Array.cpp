class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool comp(string a,string b)

 {

     return a+b>b+a;

 }

 string printLargest(vector<string> &arr) {

     // code here

          sort(arr.begin(),arr.end(),comp);

             string ans="";

             for(auto x: arr)

                ans+=x;

                

     return ans;

 }
};
Link = (https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1?page=2&difficulty[]=1&category[]=Arrays&sortBy=submissions)
