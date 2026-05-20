class Solution {
public:

    int solve(int i,int j,string &s,string &temp,int dp[][1001])
    {
        if(i==s.size() || j==s.size())
        return 0;

        if(dp[i][j] != -1)
        return dp[i][j];

        if(s[i] == temp[j])
        return dp[i][j] = 1+solve(i+1,j+1,s,temp,dp);

        return dp[i][j] = max(solve(i+1,j,s,temp,dp),solve(i,j+1,s,temp,dp));
    }
    int longestPalindromeSubseq(string s) {
        int dp[1001][1001];
        for(int i=0;i<1001;i++)
        for(int j=0;j<1001;j++)
        dp[i][j]=-1;
        string temp=s;
        reverse(temp.begin(),temp.end());
        return solve(0,0,s,temp,dp);
    }
};