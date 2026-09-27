class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        string ans="";
        for(int i=0;i<t.length();i++){
            if(t[i]==s[j]){
                ans+=t[i];
                j++;
            }

        }
        return (ans==s); 
    }
};