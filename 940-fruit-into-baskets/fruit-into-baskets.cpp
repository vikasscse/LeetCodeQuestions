class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>s;
        int left=0;
        int index=0;

        for(int i=0;i<fruits.size();i++)
        {
            s[fruits[i]]++;
            while(s.size()>2)
            {
                s[fruits[left]]--;
                if(s[fruits[left]]==0)
                s.erase(fruits[left]);
                left++;
            }
            index=max(index,i-left+1);
        }
        return index;
    }
};