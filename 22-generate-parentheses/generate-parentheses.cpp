class Solution {
public:

    void fun(int n,string str,int open,int close,vector<string>&ans)
    {
        if(open==0 && close==0)
        {
            ans.push_back(str);
            return;
        }
        if(open>0)
        {
            fun(n,str+"(",open-1,close,ans);
        }
        if(close>open)
        {
            fun(n,str+")",open,close-1,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        fun(n,"",n,n,ans);
        return ans;
    }
};