class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int first;

        int second=nums[n-3]*nums[n-2]*nums[n-1];
        if(nums[0]<0 && nums[1]<0 && nums[n-1]>0)
        {
            first=nums[0]*nums[1]*nums[n-1];

            return max(first,second);
        }
        return second;
    }
};