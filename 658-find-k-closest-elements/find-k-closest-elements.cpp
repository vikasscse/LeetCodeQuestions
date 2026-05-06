class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int start=0;
        int end=arr.size()-1;
        int index=arr.size();;
        vector<int>ans;

        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if (arr[mid] >= x) 
            {
            index = mid;   
            end = mid - 1; 
            }  
            else 
            start = mid + 1;
        }
        int right=index;
        int left=index-1;

        while(k--)
        {
            if(right<arr.size() && left>=0)
            {
                if(abs(x-arr[left]) <= abs(x-arr[right]))
                {
                    ans.push_back(arr[left]);
                    left--;
                }
                else
                {
                    ans.push_back(arr[right]);
                    right++;
                }
            }
            else if(left<0)
            {
                ans.push_back(arr[right]);
                right++;
            }
            else if(right>arr.size()-1)
            {
                ans.push_back(arr[left]);
                left--;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};