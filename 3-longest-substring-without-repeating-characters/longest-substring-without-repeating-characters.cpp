class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,count=0;
        set<char>st;
        while(right<s.size())
        {
            if(st.count(s[right])==0)
            {
                st.insert(s[right]);
                count=max(count,right-left+1);
                right++;
            }
            else
            {
                st.erase(s[left]);
                left++;
            }
        }
        return count;
    }
};