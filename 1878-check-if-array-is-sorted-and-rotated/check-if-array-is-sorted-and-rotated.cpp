class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++)
        temp.push_back(nums[i]);

        sort(temp.begin(),temp.end());

        for(int i=0;i<temp.size();i++)
        {
            int temp1=temp[0];
            for(int j=1;j<temp.size();j++)
            {
                temp[j-1]=temp[j];
            }
            temp[temp.size()-1]=temp1;

            if(temp==nums)
            return true;
        }
        return false;
    }
};