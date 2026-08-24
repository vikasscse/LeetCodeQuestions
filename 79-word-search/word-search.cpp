class Solution {
public:

    bool check(int i,int j,int n,int m)
    {
        return i>-1&&j>-1&&i<n&&j<m;
    }

    bool dfs(vector<vector<char>>& board, string& word,int i, int j, int k)
    {
        int n=board.size();
        int m=board[0].size();

        if (k==word.size())
        return true;

        if (!check(i, j, n, m) || board[i][j] != word[k])
        return false;

        char temp = board[i][j];
        board[i][j] ='#';

        int arr1[]={-1, 1, 0, 0};
        int arr2[]={0, 0, -1, 1};

        for (int x=0;x<4;x++)
        {
            if (dfs(board, word,i+arr1[x],j+arr2[x], k + 1))
                return true;
        }
        board[i][j] = temp;

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();

        int arr1[]={-1,1,0,0};
        int arr2[]={0,0,-1,1};
        int k=1;
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(board[i][j]==word[0])
            {
                if (dfs(board, word, i, j, 0))
                return true;
            } 
        }
        return false;
    }
};