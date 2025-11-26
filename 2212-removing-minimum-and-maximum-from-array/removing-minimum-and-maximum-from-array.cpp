class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int a,b,c,d;
        int index1=-1;
        int n=nums.size();
        int index2=-1;
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
                index1=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(min>nums[i]){
                min=nums[i];
                index2=i;
            }
        }
        int i=std::min(index1,index2);
        int j=std::max(index1,index2);
        a=j+1;
        b=n-i;
       c=j+1+(n-i);
        d=i+1+(n-j);
        int e=std::min({a,b,c,d});
        return e;
    }
};