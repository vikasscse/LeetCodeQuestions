class Solution {
public:

    int fun(vector<int>&coins,int amount,int index,vector<vector<int>>&dp)
    {
        if(amount==0) return 0;

        if(amount<0) return INT_MAX;
        if(index>=coins.size())
        return INT_MAX;

        if(dp[index][amount] != -1) 
        return dp[index][amount];

        int take=INT_MAX;
        if(coins[index]<=amount)
        {
            int temp=fun(coins,amount-coins[index],index,dp);
            if(temp!=INT_MAX)
            take=temp+1;
        }
        int Nottake=fun(coins,amount,index+1,dp);

        return dp[index][amount]=min(take,Nottake);

    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int ans = fun(coins,amount,0,dp);
        if(ans==INT_MAX)
        return -1;

        return ans;
    }
};