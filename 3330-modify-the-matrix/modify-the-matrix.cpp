class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>>ans=matrix;
        for(int i=0;i<matrix[0].size();i++)
        {
            int max=INT_MIN;
            for(int j=0;j<matrix.size();j++)
            {
                if(matrix[j][i]>max)
                {
                    max=matrix[j][i];
                }
            }
            for(int j=0;j<matrix.size();j++)
            {
                if(ans[j][i]==-1)
                ans[j][i]=max;
            }
        }
         return ans;
    }
};