class Solution {
public:
    int mirrorDistance(int n) {
        int a=n;
        int rev=0;
        while(a>0)
            {
                int digit=a%10;
                rev=rev*10+digit;
                a=a/10;
            }
        return abs(rev-n);
    }
};