class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>prefix;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            prefix.push_back(sum);
        }
        return prefix;
    }
};