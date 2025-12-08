class Solution {
public:
    int arrangeCoins(int n) {
        int row=0;
        int FirstRowCoin=1;
        int coin=n;
        while(coin>=FirstRowCoin)
        {
            coin=coin-FirstRowCoin;
            FirstRowCoin++;
            row++;
        }
        return row;
    }
};