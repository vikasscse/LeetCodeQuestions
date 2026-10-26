class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int left=0;
        long long int count=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=minK && nums[i]<=maxK)
            {
                count+=(i-left+1);
            }
            else
            left=i+1;
        }
        return count;
    }
};