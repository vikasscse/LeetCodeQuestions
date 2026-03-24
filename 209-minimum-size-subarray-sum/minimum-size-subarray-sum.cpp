class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int first=0,second=0;
        int index=nums.size()+1;
        int sum=0;

        while(second<nums.size())
        {
            sum+=nums[second];
            
            if(sum >= target)
            {
                while(sum >= target)
                {
                    index=min(index,(second-first+1));
                    sum-=nums[first];
                    first++;
                }
            }
            second++;
        }
        if(index==nums.size()+1) return 0;
        return index;
    }
};