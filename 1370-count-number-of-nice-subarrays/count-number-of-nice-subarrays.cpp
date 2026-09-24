class Solution {
public:

    int fun(vector<int>&nums,int k)
    {
        if(k<0) return 0;
        int count=0;
        int odd_count=0;
        int left=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==1)
            odd_count++;
            
            if(odd_count>k)
            {
                while(odd_count>k)
                {
                    if(nums[left]%2==1)
                    odd_count--;
                    left++;
                }
            }

            count+=(i-left);
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int first=fun(nums,k);
        int second=fun(nums,k-1);

        return first-second;
    }
};