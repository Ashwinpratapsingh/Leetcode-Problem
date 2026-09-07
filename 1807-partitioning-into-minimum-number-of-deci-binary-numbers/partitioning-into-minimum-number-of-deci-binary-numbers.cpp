class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        if(n=="0") return 0;
        if(n=="1") return 1;
        for(char x:n){
            int num = x - '0';
            ans=max(ans,num);
        }
        return ans;
    }
};