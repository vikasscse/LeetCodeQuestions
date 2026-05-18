class Solution {
public:
    int solve(int i,int j,vector<vector<int>>&matrix,vector<vector<int>>& dp)
    {
        if(j<0 || j>=matrix[0].size())
        return INT_MAX;

        if(i==matrix.size()-1)
        return matrix[i][j];

        if(dp[i][j]  != -101)
        return dp[i][j];

        int leftDiagonal=solve(i+1,j-1,matrix,dp);
        int rightDiagonal=solve(i+1,j+1,matrix,dp);
        int down=solve(i+1,j,matrix,dp);

        return dp[i][j]=matrix[i][j]+min(down,(min(leftDiagonal,rightDiagonal)));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans=INT_MAX;
        vector<vector<int>>dp(matrix.size(),vector<int>(matrix[0].size(),-101));
        for(int j=0;j<matrix[0].size();j++)
        ans=min(ans,solve(0,j,matrix,dp));

        return ans;
    }
};