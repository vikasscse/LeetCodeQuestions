class Solution {
public:
    int solve(int index,vector<int>&nums,vector<int>&dp)
    {
        if(index >= nums.size())
        return false;

        if(index==nums.size()-1)
        return true;

        if(dp[index]!=-1)
        return dp[index];

        for(int i= index+1;i<=(index+nums[index]);i++)
        {
            if(dp[index]=solve(i,nums,dp))
            return true;
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size()-1,-1);
        return solve(0,nums,dp);
    }
};