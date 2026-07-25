class Solution {
public:

    int find(vector<int>&nums,int index,int n,vector<int>&dp)
    {
        if(index>=n)
        {
            return 0 ;
        }
        if(dp[index]!=-1)
        return dp[index];

        dp[index]= max((nums[index]+find(nums,index+2,n,dp)),find(nums,index+1,n,dp));
        return dp[index];
    }

    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+2,-1);
        int n=nums.size();
        return find(nums,0,n,dp);
    }
};