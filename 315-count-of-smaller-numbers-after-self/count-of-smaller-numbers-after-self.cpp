class Solution {
public:

    void merge_sort(vector<pair<int,int>>&arr,int low,int mid,int high,vector<int>&ans)
    {
        vector<pair<int,int>>temp(high-low+1);
        int first=low;
        int second=mid+1;
        int pos=0;
        int count=0;

        while(first<=mid && second<=high)
        {
            if(arr[first].first <= arr[second].first)
            {
                ans[arr[first].second]+=count;
                temp[pos++]=arr[first++];
            }
            else
            {
                count++;
                temp[pos++]=arr[second++];
            }
        }
        while(first<=mid)
        {
            ans[arr[first].second]+=count;
            temp[pos++]=arr[first++];
        }
        while(second<=high)
        {
            temp[pos++]=arr[second++];
        }

        pos=0;
        mid=low;
        while(mid<=high)
        arr[mid++]=temp[pos++];
    }

    void merge(vector<pair<int,int>>&arr,int low,int high,vector<int>&ans)
    {
        if(low>=high)
        return;

        int mid=low+(high-low)/2;

        merge(arr,low,mid,ans);
        merge(arr,mid+1,high,ans);
        merge_sort(arr,low,mid,high,ans);
    }
    vector<int> countSmaller(vector<int>& nums) {
        vector<pair<int,int>>arr;
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            arr.push_back({nums[i],i});
        }
        merge(arr,0,nums.size()-1,ans);

        return ans;
    }
};