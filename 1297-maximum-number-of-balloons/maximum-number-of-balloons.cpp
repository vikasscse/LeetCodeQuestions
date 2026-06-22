class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int arr[26]={0};

        for(int i=0;i<text.size();i++)
        {
            arr[text[i]-'a']++;
        }
        string s="balloon";

        int count=INT_MAX;

        count=min(count,arr['b'-'a']);
        count=min(count,arr['a'-'a']);
        count=min(count,arr['l'-'a']/2);
        count=min(count,arr['o'-'a']/2);
        count=min(count,arr['n'-'a']);

        return count;
    }
};