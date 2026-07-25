class Solution {
public:

    // int find(int index,vector<int>&nums,int n,vector<int>&dp)
    // {
    //     if(index>n)
    //     return 0;

    //     if(dp[index]!=-1)
    //     return dp[index];

    //     return dp[index]=max(nums[index]+find(index+2,nums,n,dp),find(index+1,nums,n,dp));
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];

        // vector<int>dp1(n+2,-1);
        // vector<int>dp2(n+2,-1);

        // dp1[n-1]=dp1[n]=0;
        // dp2[n]=dp2[n+1]=0;
        int first1=0,first2=0;
        int second1=0,second2=0;
        int ans1,ans2;

        for(int i=n-2;i>=0;i--)
        {
            ans1=max(nums[i]+second1,first1);
            second1=first1;
            first1=ans1;
        }
        for(int i=n-1;i>=1;i--)
        {
            ans2=max(nums[i]+second2,first2);
            second2=first2;
            first2=ans2;
        }

        return max(first1,first2);
    }
};