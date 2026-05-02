class Solution {
public:
    string convert(string s, int numRow) {
        vector<string>ans(numRow);
        bool up=false;
        if(numRow==1) return s;
        int currRow=0;
        int idx=0;

        while(idx<s.size())
        {
            ans[currRow].push_back(s[idx]);

            if(currRow==numRow-1) up=true;
            else if(currRow==0) up=false;

            if(up)
            {
                currRow--;
            }
            else
            currRow++;

            idx++;
        }
        string result="";
        for(int i=0;i<numRow;i++)
        result=result+ans[i];

        return result;

    }
};