class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        int count=0;

        int mid=n/2;
        long long int firstSum=0,lastSum=0;

        for(int i=0;i<mid;i++)
        firstSum+=nums[i];

        for(int i=mid;i<n;i++)
        lastSum+=nums[i];

        if(firstSum>lastSum)
        count++;

        for(int i=1;i<n;i++)
        {
            firstSum+=nums[(i+mid-1)%n]-nums[i-1];
            lastSum+=nums[i-1]-nums[(i+mid-1)%n];

            if(firstSum>lastSum)
            count++;
        }
        return count;
    }
};