class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        vector<bool>temp(nums.size()+1,false);

        for(int i=0;i<nums.size();i++)
        {
            if(temp[nums[i]]==true)
            ans.push_back(nums[i]);
            else
            temp[nums[i]]=true;
        }
        return ans;
    }
};