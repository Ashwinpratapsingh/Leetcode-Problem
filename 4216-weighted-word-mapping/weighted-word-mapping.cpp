class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& w) {
        string s;
        for(int i=0;i<words.size();i++){
            int a=0;
            for(int j=0;j<words[i].size();j++){
                a+=w[words[i][j]-97];
            }
            a%=26;
            s.push_back((char)(97+25-a));
        }
        return s;
    }
};