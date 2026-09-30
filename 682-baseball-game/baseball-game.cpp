class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int>ans;
        int s=0;
        for(int i=0;i<op.size();i++){
            if(op[i]=="C") ans.pop_back();
            else if(op[i]=="D") ans.push_back(2*ans[ans.size()-1]);
            else if(op[i]=="+") ans.push_back(ans[ans.size()-2]+ans[ans.size()-1]);
            else ans.push_back(stoi(op[i]));
        }
        for(int a:ans){
            s +=a;
        }
        return s;
    }
};