class Solution {
public:

    void subset(vector<int>&nums,int p,vector<int>temp,vector<vector<int>>&ans)
    {
        if(p>=nums.size())
        {
            ans.push_back(temp);
            return;
        }
        subset(nums,p+1,temp,ans);
        temp.push_back(nums[p]);
        subset(nums,p+1,temp,ans);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        int p=0;
        subset(nums,p,temp,ans);
        return ans;
    }
};