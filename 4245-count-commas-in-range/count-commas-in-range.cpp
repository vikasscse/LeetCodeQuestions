class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;
        int count=0;
        int temp=1000;

        while(temp<=n)
            {
                count=count+(n-temp+1);
                    temp=temp*1000;
            }
        return count;
    }
};