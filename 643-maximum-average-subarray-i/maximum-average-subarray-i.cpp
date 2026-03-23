class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        int j=0;
        int n=nums.size()-1;
        while(j<k)
        {
            sum+=nums[j];
            j++;
        }
        double avg=sum/k;
        double ans=avg;

        for(int i=0;i<=n-k;i++)
        {
            avg=0;
            sum=sum-nums[i]+nums[j];
            avg=sum/k;
            ans=max(ans,avg);
            j++;
        }
        return ans;
    }
};