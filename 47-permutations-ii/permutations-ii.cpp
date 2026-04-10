class Solution {
public:

    void solve(vector<int>& nums,vector<vector<int>>&ans,int index)
    {
        if(index==nums.size()-1)
        {
            ans.push_back(nums);
            return;
        }
        unordered_set<int>st;
        for(int i=index;i<nums.size();i++)
        {
            if(st.count(nums[i])==0)
            st.insert(nums[i]);
            else continue; 

            swap(nums[i],nums[index]);
            solve(nums,ans,index+1);
            swap(nums[i],nums[index]);
        }


    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        int index=0;
        solve(nums,ans,index);

        return ans;
    }
};