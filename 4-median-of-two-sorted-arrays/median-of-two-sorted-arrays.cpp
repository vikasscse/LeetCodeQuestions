class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        double median;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            ans.push_back(nums1[i++]);
            else
            ans.push_back(nums2[j++]);
        }
        while(i<nums1.size())
        ans.push_back(nums1[i++]);

        while(j<nums2.size())
        ans.push_back(nums2[j++]);

        int n=ans.size();
        if(n%2==0)
        {
            int low=0;
            int high=n-1;
            int mid=low+(high-low)/2;

            int firstDigit=ans[mid];
            int secondDigit=ans[mid+1];
            median=(double)(firstDigit+secondDigit)/2;
        }
        else
        {
            int low=0;
            int high=n-1;
            int mid=low+(high-low)/2;
            median=ans[mid];
        }
        return median;
    }
};