class Solution {
public:
    bool isHappy(int n) {
        int sum=0,rem;
        while(n!=1 && n!=4)
        {
            sum=0;
            while(n>0)
            {
                rem=n%10;
                sum=sum+(rem*rem);
                n/=10;
            }
            n=sum;
        }
        if(n==1) return true;
        return false;
    }
};