class Solution {
public:
    int longestContinuousSubstring(string s) {
        int i=0;
        int count=1;
        int ans=1;

        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i+1] == s[i]+1)
            count++;
            else
            count=1;

            ans=max(ans,count);
        }
        return ans;
    }
};