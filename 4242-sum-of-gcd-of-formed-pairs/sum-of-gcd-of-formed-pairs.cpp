class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>ans;
        int temp=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            temp=max(temp,nums[i]);
            ans.push_back(gcd(nums[i],temp));
            
        }
        sort(ans.begin(),ans.end());

        int i=0;
        int j=ans.size()-1;
        vector<int>final1;

        while(i<j)
        {
            final1.push_back(gcd(ans[i],ans[j]));
            i++;
            j--;
        }
        long long sum=0;
        for(int i=0;i<final1.size();i++)
        {
            sum+=final1[i];
        }
        return sum;
    }
};