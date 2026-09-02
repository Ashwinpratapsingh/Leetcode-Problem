class Solution {
public:
    int maxDistinct(string s) {
        string p="";
        for(char x: s){
            if(p.find(x)==string::npos) p.push_back(x);
        
        }
        return p.size();
    }
};