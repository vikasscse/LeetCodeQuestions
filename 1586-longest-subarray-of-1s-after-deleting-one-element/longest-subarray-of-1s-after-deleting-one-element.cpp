class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count_zero=0;
        int left=0;
        int index=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            count_zero++;

            while(count_zero>=2)
            {
                if(nums[left]==0)
                count_zero--;
                left++;
            }
            index=max(index,i-left+1);
        }
        return index-1;
    }
};