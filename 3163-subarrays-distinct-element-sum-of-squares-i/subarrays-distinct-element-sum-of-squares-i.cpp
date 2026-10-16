class Solution {
public:
    int sumCounts(vector<int>& nums) {
        unordered_set<int>temp;
        int totalSum=0;

        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                temp.insert(nums[j]);
                int n=temp.size();
                totalSum+=(n*n);
            }
            temp.clear();
        }
        return totalSum;
    }
};