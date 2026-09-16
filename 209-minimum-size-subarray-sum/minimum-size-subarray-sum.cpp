class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int sum=0;
        int index=INT_MAX;

        while(right<nums.size())
        {
            sum+=nums[right];
            if(sum>=target)
            {
                while(sum>=target)
                {
                    index=min(index,right-left+1);
                    sum=sum-nums[left];
                    left++;
                }
            }
            right++;
        }
        if(index==INT_MAX)
        return 0;
        return index;

    }
};