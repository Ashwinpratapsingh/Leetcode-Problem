class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        vector<int>fq(101,0);
        for(int n:nums){
            fq[n]++;
        }
        for(int i=0;i<101;i++){
            if(fq[i]==2) ans.push_back(i);
        }
        return ans;
    }
};