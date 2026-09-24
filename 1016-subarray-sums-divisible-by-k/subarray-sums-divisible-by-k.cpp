class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int>temp(k,0);
        temp[0]=1;
        int prefix=0;
        int count=0;

        for(int i=0;i<nums.size();i++)
        {
            prefix+=nums[i];
            int rem=prefix%k;
            if(rem<0) rem+=k;
            count+=temp[rem];
            temp[rem]++;
        }
        return count;
    }
};