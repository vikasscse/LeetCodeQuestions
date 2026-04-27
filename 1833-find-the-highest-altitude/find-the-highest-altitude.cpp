class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prefixSum=0;
        int ans=0;
        for(int i=0;i<gain.size();i++)
        {
            prefixSum=prefixSum+gain[i];
            ans=max(ans,prefixSum);
        }
        return ans;
    }
};