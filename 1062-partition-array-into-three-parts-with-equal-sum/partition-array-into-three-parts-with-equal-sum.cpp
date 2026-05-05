class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {

        bool flag=false;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=0)
            flag=true;
        }
        if(!flag) return true;



        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        if(sum%3 != 0) return false;
        int part=sum/3;
        int count=0;
        int temp=0;
        for(int i=0;i<arr.size();i++)
        {
            
            temp+=arr[i];
            if(temp==part)
            {
                if(count==2) return true;
                count++;
                temp=0;
            }
        }
        if(count==3) return true;
        return false;
    }
};