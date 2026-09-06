class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        int curr;
        int prev1=2;
        int prev2=1;
        for(int i=3;i<=n;i++){
            curr=prev2+prev1;
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};