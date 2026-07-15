class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddsum=n*n;
        int evensum=n*(n+1);
        int ans;
        if(n==1)
        return 1;
        for(int i=2;i<=oddsum;i++)
        {
            if(oddsum%i==0 && evensum%i==0)
            {
                ans=i;
            }
            
        }
        return ans;
    }
};