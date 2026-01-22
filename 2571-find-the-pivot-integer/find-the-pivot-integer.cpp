class Solution {
public:
    int pivotInteger(int n) {
        int totalsum=0;
        int sum=0;
        int pivot=-1;

        for(int i=0;i<=n;i++)
        {
            totalsum+=i;
        }
        for(int i=n;i>=1;i--)
        {
            sum+=i;

            if(totalsum==sum)
            {
                pivot=i;
                break;
            }
            totalsum-=i;
        }
        return pivot;
    }
};