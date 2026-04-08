class Solution {
public:
    void solve(vector<int>& candidates, int target,vector<int>temp,vector<vector<int>>&ans,int index,int sum)
    {
        if(sum > target)
        return;
        if(sum==target)
        {
            ans.push_back(temp);
            return;
        }
        
        if(index==candidates.size())
        return;

        solve(candidates,target,temp,ans,index+1,sum);
        sum+=candidates[index];
        temp.push_back(candidates[index]);
        solve(candidates,target,temp,ans,index,sum);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int> temp;
        int sum=0;
        int index=0;
        solve(candidates,target,temp,ans,index,sum);

        return ans;
    }
};