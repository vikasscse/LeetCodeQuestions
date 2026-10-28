class Solution {
public:
    bool check(int i,int j,vector<vector<int>>& grid)
    {
        return i>=0 && i<grid.size() && j>=0 && j<grid[0].size();
    }

    int fun(int row,int col,vector<vector<int>>& grid,int ans,vector<vector<vector<int>>>&dp)
    {
        int down=INT_MAX,right=INT_MAX;
        if(row==grid.size()-1 && col==grid[0].size()-1)
        return dp[row][col][ans]=ans;

        if(dp[row][col][ans]!=-1)
        return dp[row][col][ans];

        if(check(row+1,col,grid))
        {
            down=fun(row+1,col,grid,ans^grid[row+1][col],dp);
        }
        if(check(row,col+1,grid))
        {
            right=fun(row,col+1,grid,ans^grid[row][col+1],dp);
        }
        return dp[row][col][ans]=min(down,right);
    }
    int minCost(vector<vector<int>>& grid) {
        int n=1024;
        vector<vector<vector<int>>>dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(n,-1)));
        int ans=grid[0][0];
        return fun(0,0,grid,ans,dp);
    }
};