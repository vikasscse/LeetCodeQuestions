class Solution {
public:
    int solve(int index,vector<int>&nums,vector<int>&dp)
    {
        if(index >= nums.size())
        return dp[index] = false;

        if(index==nums.size()-1)
        return dp[index] = true;

        if(dp[index]!=-1)
        return dp[index];

        for(int i= index+1;i<=(index+nums[index]);i++)
        {
            if(solve(i,nums,dp))
            return dp[i] = true;
        }
        dp[index] = false;
        return dp[index];
    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return solve(0,nums,dp);
    }
};