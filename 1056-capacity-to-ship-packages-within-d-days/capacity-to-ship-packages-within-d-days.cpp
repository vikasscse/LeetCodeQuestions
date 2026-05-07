class Solution {
public:
    bool check(vector<int>&weight,int days,int cap){
        int currCap=0;
        int currdays=1;
        for(int i=0;i<weight.size();i++)
        {
            // if(weight[i]>cap) return false;
            currCap+=weight[i];
            if(currCap > cap)
            {
                currdays++;
                currCap=weight[i];
            }
        }
        return currdays<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int start=weights[0];
        int end=0;
        int ans=0;
       
        for(int i=0;i<weights.size();i++)
        {
            start = max(start,weights[i]);
            end+=weights[i];
        }
        while(start<=end)
        {
            int mid = start+(end-start)/2;
            if(check(weights,days,mid)){
                end = mid-1;
            }
            else start = mid+1;   
        }
        return start;
    }
};