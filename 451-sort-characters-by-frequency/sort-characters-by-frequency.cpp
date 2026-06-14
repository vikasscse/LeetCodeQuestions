class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>f;

        for(int i=0;i<s.size();i++)
        {
            f[s[i]]++;
        }
        
        priority_queue<pair<int,char>>maxheap;

        for(auto &x:f)
        {
            maxheap.push({x.second,x.first});
        }
        string ans="";
        while(!maxheap.empty())
        {
            int freq=maxheap.top().first;
            char c=maxheap.top().second;

            ans += string(freq, c);

            maxheap.pop();
        }
        return ans;
    }
};