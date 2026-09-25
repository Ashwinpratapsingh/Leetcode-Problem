class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int n=1,p=0;
        for(int x:nums){
            if(x<0) {
                ans[n]=x;
                n +=2;
            }
            if(x>0){
                ans[p]=x;
                p += 2;
            }
        }
        return ans;
    }
};