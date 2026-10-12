class Solution {
public:

    void fun(vector<int>& candidates, int target,vector<int>&temp,vector<vector<int>>&ans,int index)
    {
        if(target<0)
        return;
        if(target==0)
        {
            //sort(temp.begin(),temp.end());
            ans.push_back(temp);
            return;
        }
        if(index>=candidates.size())
        return;
        
        temp.push_back(candidates[index]);
        fun(candidates,target-candidates[index],temp,ans,index+1);

        temp.pop_back();
        while(index+1<candidates.size() && candidates[index]==candidates[index+1])
        {
            index++;
        }
        fun(candidates,target,temp,ans,index+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        vector<vector<int>>ans;

        fun(candidates,target,temp,ans,0);
        // sort(ans.begin(),ans.end());
        return ans;
    }
};