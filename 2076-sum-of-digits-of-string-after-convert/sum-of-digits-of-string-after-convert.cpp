class Solution {
public:
    int getLucky(string s, int k) {
        string temp="";
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            int val=(s[i]-'a'+1);
            temp+=to_string(val);
        }
        for(int i=0;i<temp.size();i++)
        {
            ans=ans+(temp[i]-'0');
        }
        k--;

        while(k--)
        {
            int sum=0;
            while(ans>0)
            {
                sum=sum+(ans%10);
                ans=ans/10;
            }
            ans=sum;
        }
        return ans;
    }
};