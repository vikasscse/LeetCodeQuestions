class Solution {
public:

    bool check(int i,int j,int row,int col)
    {
        return i>0 && j>0 && i<=row && j<=col;
    }
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        queue<pair<int,pair<int,int>>>q;
        int row1[]={-1,-1,1,1};
        int col1[]={1,-1,-1,1};
        vector<vector<bool>>visit(9,vector<bool>(9,0));

        q.push({0,{source[0],source[1]}});
        visit[source[0]][source[1]]=1;

        int u,v,step=0;
        while(!q.empty())
        {
            step=q.front().first;
            u=q.front().second.first;
            v=q.front().second.second;
            
            q.pop();

            if(u==target[0] && v==target[1])
            return step;

            for(int i=0;i<4;i++)
            {
                int x=u+row1[i];
                int y=v+col1[i];
                while(check(x,y,8,8))
                {
                    if(!visit[x][y])
                    {
                        visit[x][y]=1;
                        q.push({step+1,{x,y}});
                    }
                    x=x+row1[i];
                    y=y+col1[i];
                }
            }
        }
        return -1;
    }
};