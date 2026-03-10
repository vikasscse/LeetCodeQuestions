class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int Lsum=0;
            int Rsum=0;
            for(int j=0;j<i;j++)
            {
                Lsum+=nums[j];
            }
            for(int j=i+1;j<nums.size();j++)
            {
                Rsum+=nums[j];
            }
            if(Lsum==Rsum)
            return i;
        }
        return -1;
    }
};