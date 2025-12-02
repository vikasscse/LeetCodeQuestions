class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0,j=0;
        while(i<s.size() && j<t.size())
        {
            if(s==t){
                i++;
                j++;
            }
            else return false;
        }
        return true;
    }
};