class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>s1_freq(26,0);
        vector<int>s2_freq(26,0);

        if(s1.size()>s2.size())
        return false;

        for(int i=0;i<s1.size();i++)
        {
            s1_freq[s1[i]-'a']++;
            s2_freq[s2[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(s1_freq[i]!=s2_freq[i])
            break;
            else if(i==25)
            return true;
            else
            continue;
        }

        for(int i=s1.size();i<s2.size();i++)
        {
            s2_freq[s2[i-s1.size()]-'a']--;
            s2_freq[s2[i]-'a']++;

            for(int i=0;i<26;i++)
            {
                if(s1_freq[i]!=s2_freq[i])
                break;
                else if(i==25)
                return true;
                else
                continue;
            }
        }
        return false;
    }
};