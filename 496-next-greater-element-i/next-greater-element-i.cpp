class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            int num=nums1[i];
            int temp=-1;
            int index=0;
            for(int j=0;j<nums2.size();j++)
            {
                if(num==nums2[j])
                {
                    index=j;
                    break;
                }
            }
           for(int k=index;k<nums2.size();k++)
           {
                if(num<nums2[k])
                {
                    temp=nums2[k];
                    break;
                }
                
           }
            ans.push_back(temp);
        }
        return ans;
    }
};