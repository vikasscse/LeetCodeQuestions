class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     if(s.empty()) return 0;
        bool count[128];
        for(int i=0;i<128;i++){
            count[i]=0;
        }
        int total=1;
        int first=0,second=0;
        while(second<s.size())
        {
            while(count[s[second]])
            {
                count[s[first]]=0;
                first++;
            }
            count[s[second]]=1;
            total=max(total,second-first+1);
            second++;
        }
        return total;
    }
};