class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<pair<int,int>>num(arr.size());
        if(arr.size()==0)
        return {};

        for(int i=0;i<arr.size();i++)
        {
            num[i]={arr[i],i};
        }
        sort(num.begin(),num.end());

        vector<int>ans(arr.size());
        int rank=1;

        ans[num[0].second]=rank;

        for(int i=1;i<arr.size();i++)
        {
            if(num[i].first!=num[i-1].first)
            rank++;
            ans[num[i].second]=rank;
        }
        return ans;
    }
};