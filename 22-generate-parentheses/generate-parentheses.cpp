class Solution {
public:

    bool istruee(string s)
    {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            st.push(s[i]);
            else 
            {
                if(!st.empty())
                st.pop();
                else return false;
            }
        }
        if(st.size()==0)
        return true;

        return false; 
    }

    void parenthesis(vector<string>&ans,string str,int n)
    {
        if(str.size()==n)
        {
            if(istruee(str))
            {
                ans.push_back(str);
            }
            return;

        }
        parenthesis(ans,str+"(",n);
        parenthesis(ans,str+")",n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string str="(";

        parenthesis(ans,str,2*n);

        return ans;
    }
};