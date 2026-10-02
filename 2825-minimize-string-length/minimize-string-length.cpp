class Solution {
public:
    int minimizedStringLength(string s) {
        vector<int>fq(26);
        int ans=0;
        for(int i=0;i<s.size();i++){
            fq[s[i]-'a']++;
        }
        for(int i=0;i<fq.size();i++){
            if(fq[i]!=0)ans++;
        }
        return ans;
    }
};