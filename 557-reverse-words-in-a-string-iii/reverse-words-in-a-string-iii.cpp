class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0 , j = 0;

        while(j <= n) {
            if (j == n || s[j] == ' ') {
                reverse(begin(s) + i , begin(s) + j);
                i = j + 1;
            }
            j++;
        }
        return s;
    }
};