class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int temp=nums[i];
            int sum=0;
            while(temp>0)
            {
                sum=sum+(temp%10);
                temp=temp/10;
            }
            ans=min(ans,sum);
        }
        return ans;
    }
};