class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int x=0;x<s.size();x++)
        {
            if(tolower(s[x])>='a' && tolower(s[x])<='z' || s[x]>='0' && s[x]<='9')
            ans+=tolower(s[x]);
        }
        int i=0,j=ans.size()-1;
        while(i<=j)
        {
            if(ans[i] !=ans[j])
            return false;
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};