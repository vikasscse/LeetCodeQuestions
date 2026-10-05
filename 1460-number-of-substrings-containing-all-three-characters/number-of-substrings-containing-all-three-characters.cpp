class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>m;
        int count=0;
        int n = s.size();
        int j=0;

        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;

            while(m.size()==3)
            {
                count+=(n-i);
                m[s[j]]--;

                if(m[s[j]]==0)
                m.erase(s[j]);

                j++;
            }
        }
        return count;
    }
};