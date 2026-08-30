class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        unordered_map<int,int>m;

        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=i;
        }

        int mini=INT_MAX;
        int maxi=INT_MIN;

        int index1=-1,index2=-1;
        for(auto x: m)
        {
            if(mini > x.first)
            {
                mini=x.first;
                index1=x.second;
            }

            if(maxi < x.first)
            {
                maxi=x.first;
                index2=x.second;
            }
        }
        //delete from left
        int left=max(index1,index2)+1;
        //delete from right
        int right=nums.size()-(min(index1,index2));

        //from left and right both
        int both=min(index1,index2)+1+ nums.size()-max(index1,index2);

        return min(both,min(left,right));
        
    }
};