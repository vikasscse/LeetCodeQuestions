class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int first=0;
        int second=0;
        int product=1;
        int count=0;

        if(k <= 1) return 0;

        while(second < nums.size())
        {
            product=product*nums[second];

            while(product >= k)
            {
                product=product/nums[first];
                first++;
            }

            count+=(second-first+1);

            second++;
        }
        return count;
    }
};