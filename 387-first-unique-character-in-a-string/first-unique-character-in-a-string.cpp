class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26];
        int ans=-1;
        for(int i=0;i<26;i++)
        {
            arr[i]=0;
        }
        for(int i=0;i<s.size();i++)
        {
            int index=s[i]-'a';
            arr[index]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(arr[s[i]-'a']==1)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};