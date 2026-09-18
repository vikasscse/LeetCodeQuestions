class Solution {
public:
    bool check(char c)
    {
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }
    int maxVowels(string s, int k) {
        int count=0;
        int left=0;
        int ans=0;

        for(int i=0;i<k;i++)
        {
            if(check(s[i]))
            count++;
            ans=max(ans,count);
        }
        for(int i=k;i<s.size();i++)
        {
            if(check(s[i-k]))
            count--;
            if(check(s[i]))
            count++;
            ans=max(ans,count);
        }
        return ans;
    }
};