class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int k) {
        vector<int>num1;
        vector<int>num2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<k) num1.push_back(nums[i]);
            if(nums[i]>k) num2.push_back(nums[i]);
            if(nums[i]==k) num2.insert(num2.begin(), nums[i]);
        }
        num1.insert(num1.end(),num2.begin(),num2.end());
        return num1;
    }
};