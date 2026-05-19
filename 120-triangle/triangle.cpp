class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& triangle,int dp[][201])
    {
        if(i==triangle.size()-1)
        return dp[i][j]=triangle[i][j];

        if(dp[i][j] != -10001)
        return dp[i][j];

        int down=solve(i+1,j,triangle,dp);
        int right=solve(i+1,j+1,triangle,dp);

        return dp[i][j]=triangle[i][j]+min(down,right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int dp[201][201];
        for(int i=0;i<201;i++)
            for(int j=0;j<201;j++)
                dp[i][j]=-10001;
        return solve(0,0,triangle,dp);
    }
};