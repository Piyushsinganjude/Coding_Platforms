class Solution{
    static void printTillN(int N){
        // base case
        if(N==1) {
            System.out.print(N + " ");
            return;
        }
        // recursive call
        printTillN(N-1);
        System.out.print(N+" ");
    }
}
