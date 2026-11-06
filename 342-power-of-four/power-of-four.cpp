class Solution {
public:
    bool help(double n){
        n=n/4;
        if(n==1) return true;
        if(n<1) return false;
        return help(n);
    }
    bool isPowerOfFour(int n) {
        if(n==1) return -1;
        double ans=n;
        return help(ans);
    }
};