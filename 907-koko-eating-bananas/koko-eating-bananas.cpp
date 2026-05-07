class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=0;
        int start=1,end=INT_MIN;
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i]>end)
            end=piles[i];
        }
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            long long sum=0;
            for(int i=0;i<piles.size();i++)
            {
                // if(piles[i]==mid) sum+=(piles[i]/mid);
                // else
                // sum=sum+((piles[i]/mid)+1);
                sum += (piles[i] + mid - 1) / mid;
            }
            if(sum<=h)
            {
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }
};