class Solution {
public:
    int recfeb(int n){
        if(n==0 || n==1) return n;
        return recfeb(n-1) + recfeb(n-2);
    }
    int fib(int n) {
        return recfeb(n);
    }
};