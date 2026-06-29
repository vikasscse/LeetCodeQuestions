class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        priority_queue<int>p;
        long long int res=0;

        for(int i=0;i<nums.size();i++)
        {
            p.push(nums[i]);
        }
        while(k--)
        {
            long long int num=p.top();
            p.pop();

            if(mul>0)
            {
                res=res+ mul*num;
                mul--;
            }
            else
            {
                res+=num;
            }

        }
        return res;
    }
};