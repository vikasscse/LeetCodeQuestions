class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        vector<bool>temp(nums.size()+1,false);
        for(int i=0;i<nums.size();i++)
        {
            temp[nums[i]]=true;
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(temp[i]==false)
            ans.push_back(i);
        }
        return ans;
    }
};