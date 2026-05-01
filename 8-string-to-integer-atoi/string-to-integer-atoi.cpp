class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        long long int ans=0;
        int sign=1;
        int i=0;
        
        while(i<n && s[i]==' ')
        i++;

        if(s[i]=='-' || s[i]=='+')
        {
            if(s[i]=='-') sign=-1;
            if(s[i]=='+') sign=+1;
            i++;
        }

        while(i<n && s[i]>='0' && s[i]<='9')
        {
            ans=ans*10+(s[i]-'0');
            i++;

            if(ans*sign>INT_MAX) return INT_MAX;
            if(ans*sign<INT_MIN) return INT_MIN;
        }
        return ans*sign;
    }
};