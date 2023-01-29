class Compute {
    
    public long[] printFirstNegativeInteger(long A[], int N, int K)
    {
      int i =0,j=0;
      Queue<Long> q = new LinkedList<>();
      long result[]= new long [N-K+1];
      int idx = 0;
    while(j<N){
        if(A[j]<0)
        q.add(A[j]);
        
        if(j-i+1 == K){
            if(q.size()==0){
                result[idx++] = 0;
            }
            else{
                result[idx++] = q.peek();
                if(A[i] == q.peek()){
                    q.poll();
                }
                
            }
            i++;
        }
        j++;
    }
    return result;
}
}
Link = (https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1?page=1&category[]=two-pointer-algorithm&sortBy=submissions)
