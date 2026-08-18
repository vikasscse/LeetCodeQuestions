class Solution {
public:

    bool check(int i,int j,int row,int col)
    {
        return i>-1&& i<row && j>-1&& j<col;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();

        int GoodOrange=0;

        queue<pair<pair<int,int>,int>>q;

        for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        {
            if(grid[i][j]==1)
            GoodOrange++;

            else if(grid[i][j]==2)
            {
                q.push({{i,j},0});
            }
        }
        int i,j,timer=0;
        while(!q.empty())
        {
            i=q.front().first.first;
            j=q.front().first.second;
            timer=q.front().second;
            q.pop();

            //up
            if(check(i-1,j,row,col) && grid[i-1][j]==1)
            {
                grid[i-1][j]=0;
                GoodOrange--;
                q.push({{i-1,j},timer+1});
            }
            //down
            if(check(i+1,j,row,col) && grid[i+1][j]==1)
            {
                grid[i+1][j]=0;
                GoodOrange--;
                q.push({{i+1,j},timer+1});
            }
            //left
            if(check(i,j-1,row,col) && grid[i][j-1]==1)
            {
                grid[i][j-1]=0;
                GoodOrange--;
                q.push({{i,j-1},timer+1});
            }
            //right
            if(check(i,j+1,row,col) && grid[i][j+1]==1)
            {
                grid[i][j+1]=0;
                GoodOrange--;
                q.push({{i,j+1},timer+1});
            }
        }
        if(GoodOrange) return -1;
        return timer;
    }
};