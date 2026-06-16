class Solution {
public:
    string processStr(string s) {
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                temp+=s[i];
            }
            else if(s[i]=='*')
            {
                if(!temp.empty())
                temp.pop_back();
            }
            else if(s[i]=='#')
            {
                string ans=temp;
                temp+=ans;
            }
            else
            {
                reverse(temp.begin(),temp.end());
            }
        }
        return temp;
    }
};