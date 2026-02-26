class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        vector<int>pi;
        vector<int>right;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] < pivot)
            ans.push_back(nums[i]);
            else if(nums[i] == pivot)
            pi.push_back(nums[i]);
            else
            right.push_back(nums[i]);
        }
        for(int i=0;i<pi.size();i++)
        ans.push_back(pi[i]);
        for(int i=0;i<right.size();i++)
        ans.push_back(right[i]);

        return ans;
    }
};