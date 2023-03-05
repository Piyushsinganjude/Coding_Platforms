long long toh(int N, int from, int to, int aux) {
if(N==0){
            return 0;
        }
        int l,r;
        l=toh(N-1,from,aux,to);
        cout<<"move disk "<< N <<" from rod "<< from <<" to rod "<< to <<endl;
        r=toh(N-1,aux,to,from);
        return l+r+1;
  link = (https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1?page=1&difficulty[]=1&category[]=Recursion&sortBy=submissions)
