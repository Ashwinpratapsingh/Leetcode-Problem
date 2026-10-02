class Solution {
public:
    string removeDuplicates(string s, int k) {
        int count=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) count++;
            else count =1;
            if(count ==k){
                s.erase(i-k+1,k);
                count =1;
                i=0;
            }
        }
        return s;
    }
};