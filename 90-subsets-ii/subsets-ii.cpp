class Solution {
public:
    void solve(vector<int>& nums,int index,vector<vector<int>>&ans,vector<int>temp)
    {
        if(index==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);
        solve(nums,index+1,ans,temp);
        temp.pop_back();

        int i=index+1;
        while(i < nums.size() && nums[i] == nums[i-1])
            i++;

        solve(nums,i,ans,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int index=0;
        vector<int>temp;
        solve(nums,index,ans,temp);

        return ans;
    }
};