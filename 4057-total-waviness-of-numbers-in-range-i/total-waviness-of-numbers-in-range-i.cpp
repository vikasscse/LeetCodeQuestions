class Solution {
public:
    int solve(int num)
    {
        int count=0;
        string temp=to_string(num);
        if(temp.size()<3) return 0;

        for(int i=1;i<temp.size()-1;i++)
        {
            if(temp[i-1]<temp[i] && temp[i]>temp[i+1])
            count++;
            else if(temp[i-1]>temp[i] && temp[i]<temp[i+1])
            count++;
        }
        return count;
    }
    int totalWaviness(int num1, int num2) {
        if(num2<100) return 0;
        int total=0;
        for(int i=num1;i<=num2;i++)
        {
            total=total+solve(i);
        }
        return total;
    }
};