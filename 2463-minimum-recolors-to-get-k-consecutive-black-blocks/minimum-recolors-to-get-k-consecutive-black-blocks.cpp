class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int left=0;
        if(k>blocks.size())
        return 0;
        int count=0;
        int ans=INT_MAX;

        for(int i=0;i<blocks.size();i++)
        {
            if(blocks[i]=='W')
                count++;
            if(i-left+1==k)
            {
                ans=min(ans,count);
                if(blocks[left]=='W')
                count--;
                left++;
            }
        }
        return ans;
    }
};