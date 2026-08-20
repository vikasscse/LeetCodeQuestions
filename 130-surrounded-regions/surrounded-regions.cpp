class Solution {
public:

    bool check(int i,int j,int row,int col)
    {
        return i>-1&&j>-1&&i<row&&j<col;
    }
    void solve(vector<vector<char>>& board) {
        vector<vector<char>>ans(board.size(),vector<char>(board[0].size(),'X'));
        vector<vector<bool>>visit(board.size(),vector<bool>(board[0].size(),0));
        
        int row=board.size();
        int col=board[0].size();
        queue<pair<int,int>>q;
        
        int arr1[]={-1,1,0,0};
        int arr2[]={0,0,-1,1};
        
        //up
        for(int i=0;i<col;i++)
        {
            if(board[0][i]=='O')
            {
                ans[0][i]='O';
                q.push({0,i});
            }
            visit[0][i]=1;
        }
        //down
        for(int i=0;i<col;i++)
        {
            if(board[row-1][i]=='O')
            {
                ans[row-1][i]='O';
                q.push({row-1,i});
            }
            
            visit[row-1][i]=1;
        }
        //left
        for(int i=1;i<row-1;i++)
        {
            if(board[i][0]=='O')
            {
                ans[i][0]='O';
                q.push({i,0});
            }
            visit[i][0]=1;
        }
        //right
        for(int i=1;i<row-1;i++)
        {
            if(board[i][col-1]=='O')
            {
                ans[i][col-1]='O';
                q.push({i,col-1});
            }
            visit[i][col-1]=1;
        }
        
        int u,v;
        while(!q.empty())
        {
            int u=q.front().first;
            int v=q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                if(check(u+arr1[i],v+arr2[i],row,col) && !visit[u+arr1[i]][v+arr2[i]])
                {
                    visit[u+arr1[i]][v+arr2[i]]=1;
                    if(board[u+arr1[i]][v+arr2[i]]=='O')
                    {
                        ans[u+arr1[i]][v+arr2[i]]='O';
                        q.push({u+arr1[i],v+arr2[i]});
                    }
                }
            }
        }
        // for(int i=0;i<row;i++)
        // for(int j=0;j<col;j++)
        // grid[i][j]=ans[i][j];
        board.swap(ans);
    }
};