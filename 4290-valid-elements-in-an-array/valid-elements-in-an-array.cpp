class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
             bool left=true;
            for(int j=i-1;j>=0;j--)
            {
                if(nums[j]>=nums[i])
                left=false;
            }
            bool right=true;
            for(int k=i+1;k<nums.size();k++)
            {
                if(nums[k]>=nums[i])
                right=false;
            }
            if(left || right)
            ans.push_back(nums[i]);
        }
        return ans;
    }
};