class Solution {
public:
    string reversePrefix(string s, int k) {
        for(int i=0;k>i;i++){
            swap(s[i],s[k-1]);
            k--;
        }
        return s;
        
    }
};