class Solution {
public:
    bool check(int i,int j,int row,int col)
    {
        return i>-1&&i<row&&j>-1&&j<col;
    }

    void bfs(int i,int j,int row,int col,vector<vector<char>>& grid)
    {
        queue<pair<int,int>>q;
        q.push({i,j});

        int x,y;
        while(!q.empty())
        {
            x=q.front().first;
            y=q.front().second;
            q.pop();

            if(check(x-1,y,row,col) && grid[x-1][y]=='1')
            {
                grid[x-1][y]=0;
                q.push({x-1,y});
            }
            if(check(x+1,y,row,col) && grid[x+1][y]=='1')
            {
                grid[x+1][y]=0;
                q.push({x+1,y});
            }
            if(check(x,y-1,row,col) && grid[x][y-1]=='1')
            {
                grid[x][y-1]=0;
                q.push({x,y-1});
            }
            if(check(x,y+1,row,col) && grid[x][y+1]=='1')
            {
                grid[x][y+1]=0;
                q.push({x,y+1});
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int count=0;

        for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        {
            if(grid[i][j]=='1')
            {
                grid[i][j]=0;
                count++;
                bfs(i,j,row,col,grid);
            }
        }
        return count;
    }
};