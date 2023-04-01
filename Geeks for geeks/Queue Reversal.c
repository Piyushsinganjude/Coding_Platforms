void func(struct Queue* Q){
    if(size(Q)!=0){
        int x = front(Q);
        dequeue(Q);
        func(Q);
        enqueue(Q,x);
    }
}
struct Queue* rev(struct Queue* Q)
{
    func(Q);
    return Q;
}
LINK = (https://practice.geeksforgeeks.org/problems/queue-reversal/1?page=1&difficulty[]=-1&category[]=Stack&sortBy=submissions)
