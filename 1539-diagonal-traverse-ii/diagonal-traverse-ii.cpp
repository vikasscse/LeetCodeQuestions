class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i].size()){
                max = nums[i].size();
            }
        }
        vector<vector<int>>arr(nums.size()+max-1);
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                arr[i+j].push_back(nums[i][j]);
            }
        }
        for(int i=0;i<arr.size();i++){
            for(int j=arr[i].size()-1;j>=0;j--){
                ans.push_back(arr[i][j]);
            }
        }
        return ans;
    }
};