class Solution {
public:
    int numberOfSubstrings(string s) {
        int freq[]={-1,-1,-1};
        int count=0;

        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']=i;

            if(freq[0]!=-1 && freq[1]!=-1 && freq[2]!=-1)
            {
                count+=(1+min(freq[0],min(freq[1],freq[2])));
            }
        }
        return count;
    }
};