class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int rem,multi=1,ans=0;
        while(n){
           rem=n%2;
            rem=rem^1;
            n=n/2;
            ans=ans+rem*multi;
            multi*=2;
        }
        return ans;
    }
};