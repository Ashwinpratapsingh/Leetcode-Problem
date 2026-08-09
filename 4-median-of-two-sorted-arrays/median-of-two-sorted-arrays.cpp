class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n = nums1.size();
        if(n%2==0)
        {
            int a= n/2;
            int b=(n-1)/2;
        double sum = (double)nums1[a] + (double)nums1[b];
        return sum/2;
        }
        else
        {
            int d = n/2;
            double sumodd =(double)nums1[d];
            return sumodd;
        }
        return -1;
    }
};