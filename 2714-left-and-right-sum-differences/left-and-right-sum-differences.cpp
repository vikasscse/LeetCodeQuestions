class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftsum(nums.size());
        vector<int>rightsum(nums.size());

        int sum=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            rightsum[i]=sum;
            sum+=nums[i];
        }
        
        sum=0;
        for(int i=0;i<nums.size();i++)
        {
            leftsum[i]=sum;
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=abs(leftsum[i]-rightsum[i]);
        }
        return nums;
    }
};