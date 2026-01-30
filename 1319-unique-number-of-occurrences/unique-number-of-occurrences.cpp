class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int ans[2001];
        for(int i=0;i<2001;i++)
        {
            ans[i]=0;
        }

        for(int i=0;i<arr.size();i++)
        {
            ans[arr[i]+1000]++;
        }

        for(int i=0;i<2001;i++)
        {
            if(ans[i]==0) continue;

            for(int j=i+1;j<2001;j++)
            {
                if(ans[j]==ans[i])
                return false;
            }
        }
        return true;
    }
};