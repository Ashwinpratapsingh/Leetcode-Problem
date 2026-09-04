class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> a(10,0);
        string s= to_string(n);
        for(int i=0;i<s.length();i++){
            int num = s[i] -'0';
            a[num]++;
        }
        int ans=0;
        for(int i=0; i<10;i++){
            ans += i*a[i];
        }
        return ans;
    }
};