class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>p;
        vector<string>ans(score.size());
        for(int i=0;i<score.size();i++)
        {
            p.push(make_pair(score[i],i));
        }
        int count=1;
        while(!p.empty())
        {
            int num=p.top().first;
            int index=p.top().second;
            p.pop();
            if(count==1)
            {
                ans[index]="Gold Medal";
            }
            else if(count==2)
            {
                ans[index]="Silver Medal";
            }
            else if(count==3)
            {
                ans[index]="Bronze Medal";
            }
            else
            {
                ans[index]=to_string(count);
            }
            count++;
        }
        return ans;
    }
};