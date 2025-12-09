class Solution {
public:
     void merge(vector<int>&arr,int low,int mid,int high){
        int i=low,j=mid+1;
        vector<int> temp; 
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
               temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++; 
        }
        while(j<=high){
            temp.push_back(arr[j]);
            j++;
        }
        for (int k = 0; k < temp.size(); k++) {
            arr[low + k] = temp[k];
        }
    }
     
     void mergeSort(vector<int> &arr,int low,int high){
        if(low<high){
            int mid=low+(high-low)/2;
            mergeSort(arr,low,mid);
            mergeSort(arr,mid+1,high);
            merge(arr,low,mid,high);
        }
     }
    vector<int> sortArray(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        mergeSort(nums, low, high);
        return nums;
    }
};