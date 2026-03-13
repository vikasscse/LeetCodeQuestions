class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>suffix;
        vector<int>prefix(nums.size());

        int mul=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            suffix.push_back(mul);
            mul*=nums[i];
        }
        reverse(suffix.begin(),suffix.end());

        mul=1;
        for(int i = 0; i < nums.size(); i++)
        {
            prefix[i]=mul*suffix[i];
            mul=mul*nums[i];
        }
        return prefix;
    }
};