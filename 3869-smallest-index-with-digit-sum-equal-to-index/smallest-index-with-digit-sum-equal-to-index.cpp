class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int ans=0,x=nums[i];
            while(x>0){
                ans += x%10;
                x /=10;
            }
            if(ans==i) return i;
        }
        return -1;
    }
};