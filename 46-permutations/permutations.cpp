class Solution {
public:

    void solve(vector<int>&nums,int index,vector<vector<int>>&ans)
    {
        if(index==nums.size()-1)
        {
            ans.push_back(nums);
            return;
        }
        unordered_set<int>use;

        for(int i=index;i<nums.size();i++)
        {
            // if(i != index && nums[i] == nums[index]) continue;
            swap(nums[index],nums[i]);
            solve(nums,index+1,ans);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int index=0;
        vector<vector<int>>ans;
        solve(nums,index,ans);

        return ans;
    }
};