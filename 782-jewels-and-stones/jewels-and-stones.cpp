class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>set;

        for(char i=0;i<jewels.size();i++)
        {
            set.insert(jewels[i]);
        }
        int count=0;

        for(char i=0;i<stones.size();i++)
        {
            if(set.count(stones[i]))
            {
                count++;
            }
        }
        return count;
    }
};