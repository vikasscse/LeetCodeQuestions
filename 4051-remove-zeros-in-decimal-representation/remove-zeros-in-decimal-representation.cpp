class Solution {
public:
    long long removeZeros(long long n) {
        long long temp=0;
        while(n>0)
        {   if(n%10!=0)
            temp=temp*10+n%10;
            n=n/10;
        }
        long long ans=0;
        while(temp>0)
        {
            ans=ans*10+temp%10;
            temp/=10;
        }

        return ans;
    }
};