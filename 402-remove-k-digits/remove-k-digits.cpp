class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int>st;
        string ans="";

        for(int i=0;i<num.size();i++)
        {
            if(st.empty())
            st.push(num[i]-'0');
            else if(st.top()>(num[i]-'0'))
            {
                while(k>0 && !st.empty() && st.top()>(num[i]-'0'))
                {
                    st.pop();
                    k--;
                }
                st.push(num[i]-'0');
            }
            else
            st.push(num[i]-'0');
        }
        while(k>0 && !st.empty())
        {
            st.pop();
            k--;
        }
        stack<int>temp;

        while(!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        while(!temp.empty() && temp.top()==0)
        {
            temp.pop();
        }
        while(!temp.empty())
        {
            ans+=(temp.top()+'0');
            temp.pop();
        }
        if(ans=="")
        ans+="0";
        return ans;
    }
};