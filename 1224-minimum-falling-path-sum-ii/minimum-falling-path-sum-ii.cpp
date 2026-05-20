class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&dp)
    {
        int ans=INT_MAX;
        if(i==grid.size()-1)
        return dp[i][j]=grid[i][j];

        if(dp[i][j] != -100)
        return dp[i][j];

        for(int k=0;k<grid.size();k++)
        {
            if(j==k)
            continue;

            ans=min(ans,solve(i+1,k,grid,dp));
        }
        return dp[i][j]=ans+grid[i][j];
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        int ans=INT_MAX;
        vector<vector<int>>dp(grid.size(),vector<int>(grid.size(),-100));
        for(int j=0;j<grid.size();j++)
        ans=min(ans,solve(0,j,grid,dp));

        return ans;
    }
};