class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left=0;
        int right=0;
        int blank=0;

        for(char c=0;c<moves.size();c++)
        {
            if(moves[c]=='L')
            left++;
            else if(moves[c]=='R')
            right++;
            else blank++;
        }
        return abs(left-right)+blank;
    }
};