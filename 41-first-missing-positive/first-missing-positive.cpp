class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<bool>ans(nums.size()+1,false);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0 && nums[i] <= nums.size())
            ans[nums[i]]=true;
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(ans[i]==false)
            return i;
        }
        return nums.size()+1;
    }
};