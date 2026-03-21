class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() > haystack.size()) return -1;
        int i=0,j=0;
        int start=0;

        while(i<needle.size() && j<haystack.size())
        {
            if(needle[i]==haystack[j])
            {
                if(i==0) start=j;
                i++;
                j++;

                if(i==needle.size()) return start;
            }

            else
            {
                if(i>0)
                {
                    j=start+1;
                    i=0;
                }
                else
                j++;
            }
        }
        return -1;
    }
};