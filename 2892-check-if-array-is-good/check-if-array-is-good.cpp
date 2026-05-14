class Solution {
public:
    bool isGood(vector<int>& nums) {
        int arr[201]={0};
        bool flag=false;
        bool temp=false;
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }
        for(int i=1;i<201;i++)
        {
            if(arr[i]==0)
            {
                temp=true;
            }
            if(temp)
            {
                if(arr[i]!=0)
                return false;
            }
            if(arr[i]==2)
            flag=true;
            if(flag)
            {
                if(arr[i]==1)
                return false;
            }

        }
        if(!flag) return false;
        return true;
    }
};