void SortedStack :: sort()
{
   priority_queue<int>p;
   while(!s.empty()){
       p.push(s.top());
       s.pop();
   }
   while(!p.empty()){
       cout<<p.top()<<" ";
       p.pop();
   }
}
Link = (https://practice.geeksforgeeks.org/problems/sort-a-stack/1?page=1&difficulty[]=0&category[]=Recursion&sortBy=submissions)
