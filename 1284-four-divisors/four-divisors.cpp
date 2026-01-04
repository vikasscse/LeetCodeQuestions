class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int totalSum=0;
        for(int i=0;i<nums.size();i++)
        {
            int curr=0,sum=0;
            int n=nums[i];
            for(int j=1;j*j<=n;j++)
            {
                if(n%j==0)
                {
                   int temp1=j;
                   int temp=n/j;
                   curr++;
                   sum+=temp1;

                   if(temp1!=temp)
                    {
                        sum+=temp;
                        curr++;
                    }
                }
            }
            if(curr==4)
            {
                totalSum+=sum;
            }
        }
        return totalSum;
    }
};