class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            bool flag=false;
            if(nums[i]%2==0)
            {
                ans=nums[i];
                
                for(int j=0;j<i;j++)
                {
                    if(nums[j]==ans)
                    {
                    flag=true;
                    break;
                    }
                }
                for(int k=i+1;k<nums.size();k++)
                {
                    if(nums[k]==ans)
                    {
                        flag=true;
                        break;
                    }
                }
                if(!flag) return ans;
            }
        }
        return -1;
    }
};