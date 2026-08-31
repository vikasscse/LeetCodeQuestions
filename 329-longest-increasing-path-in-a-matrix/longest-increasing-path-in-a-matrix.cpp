class Solution {
public:

    bool check(int i,int j,int m,int n)
    {
        return i>-1&&i<m&&j>-1&&j<n;
    }

    int DFS(int node,vector<vector<int>>&adj,vector<int>&dp)
    {
        int longest=1;
        if(dp[node]!=-1)
        return dp[node];
        for(int i=0;i<adj[node].size();i++)
        {
            longest=max(longest,1+DFS(adj[node][i],adj,dp));
        }
        return dp[node] = longest;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int mini=INT_MAX;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>adj(m*n);
        vector<int>dp(m*n,-1);
        int arr1[]={1,-1,0,0};
        int arr2[]={0,0,-1,1};
        
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            int node=i*n+j;

            for(int k=0;k<4;k++)
            {
                if(check(i+arr1[k],j+arr2[k],m,n) && matrix[i+arr1[k]][j+arr2[k]]>matrix[i][j])
                {
                    adj[node].push_back(n*(i+arr1[k])+(j+arr2[k]));
                }
            }
        }
        int lip=INT_MIN;
        for(int i=0;i<m*n;i++)
        lip=max(lip,DFS(i,adj,dp));
        return lip;
    }
};