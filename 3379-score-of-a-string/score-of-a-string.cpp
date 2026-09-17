class Solution {
public:
    int scoreOfString(string s) {
        int ans=0,n;
        for(int i=0;i<s.length()-1;i++){
            n=abs(s[i]-s[i+1]);
            ans+=n;
        }
        return ans;
        
    }
};