class Solution {
public:

    int fun(vector<int>&nums,int goal)
    {
        int count=0;
        int left=0;
        int sum=0;

        for(int i=0;i<nums.size();i++)
        {
            if(goal<0) return 0;
            sum+=nums[i];
            while(sum>goal)
            {
                sum-=nums[left];
                left++;
            }
            count+=(i-left+1);
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int first=fun(nums,goal);
        int second=fun(nums,goal-1);

        return first-second;
    }
};