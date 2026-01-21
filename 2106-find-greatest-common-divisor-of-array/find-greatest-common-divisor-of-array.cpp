class Solution {
public:
    int findGCD(vector<int>& nums) {

        int num=-1;
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            max=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<min)
            min=nums[i];
        }

        for(int i=min;i>=1;i--)
        {
            if(min%i==0 && max%i==0)
            {
                num=i;
                return num;
            }
        }
         return 1;
    }
};