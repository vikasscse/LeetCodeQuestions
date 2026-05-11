class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++)
        {
            vector<int>temp1;
            int temp=nums[i];
            while(temp>0)
            {
                int digit=temp%10;
                temp1.push_back(digit);
                temp=temp/10;
            }
            reverse(temp1.begin(),temp1.end());
            for(int i=0;i<temp1.size();i++)
            {
                ans.push_back(temp1[i]);
            }
        }
        return ans;
    }
};