class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        string temp="";
        string ans="";
        int count=0;


        for(int i=0;i<s.size();i++)
        {
            temp="";
            if(st.empty() && s[i]!='(')
            {
                ans+=s[i];
            }
            else if(s[i]=='(')
            {
                
                count++;
                st.push(s[i]);
            }
            else if(s[i]==')')
            {
                while(st.top()!='(')
                {
                    temp+=st.top();
                    st.pop();
                }
                st.pop();
                count--;

                int index=0;
                if(count==0)
                ans+=temp;
                else
                {
                    while(index<temp.size())
                    {
                        st.push(temp[index]);
                        index++;
                    } 
                }
            }
            else
            st.push(s[i]);
        }
        return ans;
    }
};