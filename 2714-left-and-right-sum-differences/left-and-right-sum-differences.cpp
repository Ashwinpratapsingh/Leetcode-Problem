
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n);
        vector<int> lsum(n);
        vector<int> rsum(n);
        for (int i = 0; i < n; i++) {
            if (i == 0)
                lsum[i] = 0;
            else
                lsum[i] = lsum[i - 1] + nums[i - 1];
        }
        for (int i = n - 1; i >= 0; i--) {
            if (i == n - 1)
                rsum[i] = 0;
            else
                rsum[i] = rsum[i + 1] + nums[i + 1];
        }

        // Calculate difference
        for (int i = 0; i < n; i++) {
            ans[i] = abs(lsum[i] - rsum[i]);
        }

        return ans;
    }
};
