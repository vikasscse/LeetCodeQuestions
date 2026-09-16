class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>m;
        int count=0;

        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]].push_back(i);
        }
        vector<int>arr;
        for(auto x:m)
        {
            arr=x.second;
            if(arr.size()>=3)
            {
                int diff;
                 bool flag=true;
                for(int i=1;i<arr.size();i++)
                {
                    if(i>=2)
                    {
                        if(diff!=arr[i-1]-arr[i])
                        {
                            flag=false;
                            break;
                        }
                        
                    }
                    diff=arr[i-1]-arr[i];
                }
                if(flag)
                count++;
            }
        }
        return count;
    }
};