class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>freq(101,0);

        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            for(int i=0;i<101;i++)
            {
                if(freq[i])
                {
                    ans.push_back(i);
                    freq[i]--;
                }
            }
        }
        return ans;
    }
};