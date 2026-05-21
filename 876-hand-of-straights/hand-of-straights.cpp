class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;
        if(groupSize==1)
        return true;
        map<int,int>freq;
        // int minimum = INT_MAX;
        for(int val:hand){
            // minimum = min(minimum,val);
            freq[val]++;
        }
        int n = hand.size();
        int prev;
        int currSize =0;
        while(n>0){
            currSize =0;
            for(auto &pair:freq){
                if(currSize==groupSize){
                    break;
                };
                if(pair.second>0){
                    if(currSize==0){
                        prev = pair.first;
                        currSize++;
                        pair.second--;
                        n--;
                        continue;
                    }
                    else if(pair.first==prev+1){
                        prev = pair.first;
                        currSize++;
                        pair.second--;
                        n--;
                    }
                    else return false;
                }
            }
            if(currSize!=groupSize && n==0) return false;
        }
        return true; 
    }
};