class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans=INT_MAX;
        int n=words.size();
        for(int i=0;i<words.size();i++)
        {
            if(words[i]==target)
            {
                int left=(startIndex-i+n)%n;
                int right=(i-startIndex+n)%n;
                ans=min(ans,min(left,right));
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};