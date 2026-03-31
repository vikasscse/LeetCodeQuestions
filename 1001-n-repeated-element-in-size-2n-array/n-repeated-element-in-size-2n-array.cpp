class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int>s;

        for(int i=0;i<nums.size();i++)
        {
            if(s.count(nums[i]))
            return nums[i];
            else
            {
                s.insert(nums[i]);
            }
        }
        return -1;
    }
};