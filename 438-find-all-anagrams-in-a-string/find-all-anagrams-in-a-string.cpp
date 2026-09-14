class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>p_freq(26,0);
        vector<int>s_freq(26,0);

        if(p.size()>s.size())
        return ans;

        for(int i=0;i<p.size();i++)
        {
            p_freq[p[i]-'a']++;
            s_freq[s[i]-'a']++;
        }
        for(int i=0;i<p_freq.size();i++)
        {
            if(p_freq[i]!=s_freq[i])
            break;
            else if(i==p_freq.size()-1)
            ans.push_back(0);
        }

        for(int i=1;i<=s.size()-p.size();i++)
        {
            if(s_freq[s[i-1]-'a']!=0)
            s_freq[s[i-1]-'a']--;

            s_freq[s[i+p.size()-1]-'a']++;

            for(int j=0;j<p_freq.size();j++)
            {
                if(p_freq[j]!=s_freq[j])
                break;
                else if(j==p_freq.size()-1)
                ans.push_back(i);
            }
        }
        return ans;
    }
};