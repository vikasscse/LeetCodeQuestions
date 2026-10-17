class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        vector<int>ans;
        int temp=INT_MIN;
        int big=-1;
        int small=-1;

        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    if(temp<nums[i]*nums[j] && nums[i]!=nums[j])
                    {
                        temp=nums[i]*nums[j];
                        if(nums[i]>nums[j])
                        {
                            big=i;
                            small=j;
                        }
                        else
                        {
                            big=j;
                            small=i;
                        }
                    }
                }
            }
        }
        ans.push_back(big);
        ans.push_back(small);
        return ans;
    }
};