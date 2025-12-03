class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int>st;
        int i=0,temp;
        while(i<num.size())
        {
            temp=num[i]-'0';
            while(st.size() && st.top()>temp && k)
            {
                st.pop();
                k--;
            }
            st.push(temp);
            i++;
        }
        while(k--)
        {
            st.pop();
        }
        string ans;
        char c;
        while(st.size())
        {
            c='0'+st.top();
            st.pop();
            ans+=c;
        }
        i=ans.size()-1;
        while(i>=0 && ans[i]=='0')
        {
            ans.pop_back();
            i--;
        }
        reverse(ans.begin(),ans.end());
        if(ans.size()==0)
        return "0";
        else
        return ans;
    }
};