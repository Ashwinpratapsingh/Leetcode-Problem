class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        vector<int>fq(2,0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) fq[1]=0;
            else fq[1]++;
            ans=max(ans,fq[1]);
        }
        return ans;
    }
};