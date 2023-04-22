
class Solution{
public:
    char profession(int level, int pos){
        if(pos==1) return'e';
        char par = profession(level-1,(pos+1)/2);
        if(pos%2!=0) return par;
        if(par=='e') return 'd';
        else return 'e';
    }
};
https://practice.geeksforgeeks.org/problems/finding-profession3834/1?page=1&difficulty[]=0&category[]=Recursion&sortBy=submissions
