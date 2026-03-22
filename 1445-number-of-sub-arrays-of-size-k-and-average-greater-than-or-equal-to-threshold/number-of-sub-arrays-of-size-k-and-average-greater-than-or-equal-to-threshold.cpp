class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0;
        int n=arr.size()-1;
        int sum=0;
        int j=0;
        while(j<k)
        {
            sum+=arr[j];
            j++;
        }
        if(sum/k>=threshold)
            count++;
            
        for(int i=0;i<=n-k;i++)
        {
            sum=sum-arr[i]+arr[j];
            if(sum/k>=threshold)
            count++;

            j++;
        }
        return count;
    }
};