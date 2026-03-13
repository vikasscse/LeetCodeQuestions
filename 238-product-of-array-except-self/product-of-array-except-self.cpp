class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>a1;
        vector<int>a2;
        vector<int>a3;

        int mul=1;
        for(int i=0;i<nums.size();i++)
        {
            a1.push_back(mul);
            mul*=nums[i];
        }
        mul=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            a2.push_back(mul);
            mul*=nums[i];
        }
        reverse(a2.begin(),a2.end());

        for(int i=0;i<nums.size();i++)
        {
            a3.push_back(a1[i]*a2[i]);
        }
        return a3;
    }
};