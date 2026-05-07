class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0;
        int end=0;
        int ans=0;
       
        for(int i=0;i<weights.size();i++)
        {
            start=max(start,weights[i]);
            end+=weights[i];
        }
        while(start<=end)
        {
            int count=1;
            int mid=start+(end-start)/2;
            int sum=0;

            for(int i=0;i<weights.size();i++)
            {
                sum+=weights[i];
                if(sum > mid)
                {
                    count++;
                    sum=weights[i];
                }
            }
            if(count>days)
            {
                start=mid+1;
            }
            else if(count<=days)
            {
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};