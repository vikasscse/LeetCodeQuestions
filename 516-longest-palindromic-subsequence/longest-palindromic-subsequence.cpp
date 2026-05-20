class Solution {
public:

    int solve(int i,int j,string &s,int dp[][1001])
    {
        if(i>j)
        return 0;

        if(dp[i][j] != -1)
        return dp[i][j]; 

        if(i==j)
        return dp[i][j]= 1;

        if(s[i]==s[j])
        return dp[i][j]=2+solve(i+1,j-1,s,dp);

        return dp[i][j] = max(solve(i+1,j,s,dp),solve(i,j-1,s,dp));
    }
    int longestPalindromeSubseq(string s) {
        int dp[1001][1001];
        for(int i=0;i<1001;i++)
        {
            for(int j=0;j<1001;j++)
            {
                dp[i][j] =-1;
            }
        }
        int i=0;
        int j=s.size()-1;
        return solve(i,j,s,dp);
    }
};