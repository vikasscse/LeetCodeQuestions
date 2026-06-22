class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int arr[26]={0};

        for(int i=0;i<text.size();i++)
        {
            arr[text[i]-'a']++;
        }

        int b=arr['b'-'a'];
        int a=arr['a'-'a'];
        int l=arr['l'-'a'];
        int o=arr['o'-'a'];
        int n=arr['n'-'a'];

        l/=2;
        o/=2;
        return min({b,a,l,o,n});
    }
};