class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
      vector<vector<int>>arr(mat.size()+mat[0].size()-1);
      vector<int>ans;
      for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            arr[i+j].push_back(mat[i][j]);
        }
      }
      for(int i=0;i<arr.size();i++){
        if(i%2==0){
            for(int j=arr[i].size()-1;j>=0;j--){
                ans.push_back(arr[i][j]);
            }
        }
        else{
            for(int j=0;j<arr[i].size();j++){
                ans.push_back(arr[i][j]);
            }
        }
      }
      return ans;
    }
};