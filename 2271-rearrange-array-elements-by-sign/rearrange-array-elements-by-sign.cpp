class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans1;
        vector<int>ans2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0) ans1.push_back(nums[i]);
            else ans2.push_back(nums[i]);
        }
        int i=0; int j=0; int index=0;
        while(i<ans1.size() && j<ans2.size()){
            nums[index++]=ans1[i];
            nums[index++]=ans2[j];
            i++;
            j++;
        }
        return nums;
    }
};