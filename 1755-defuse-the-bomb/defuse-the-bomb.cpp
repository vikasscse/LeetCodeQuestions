class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans;
        for(int i=0;i<code.size();i++)
        {
            if(k>0)
            {
                int sum=0;
                int j=(i+1)%code.size();
                int temp = k;
                while(temp--)
                {
                    sum+=code[j];
                    j = (j + 1) % code.size(); ;
                }
                ans.push_back(sum);
            }
            if(k<0)
            {
                int sum=0;
                int temp = -k;
                int j=(code.size()+i-1)%code.size();
                while(temp--)
                {
                    sum+=code[j];
                    j = (j - 1 + code.size()) % code.size();
                }
               ans.push_back(sum);
            }
            if(k==0)
            {
                int sum=0;
                ans.push_back(sum);
            }
        }
        return ans;
    }
};