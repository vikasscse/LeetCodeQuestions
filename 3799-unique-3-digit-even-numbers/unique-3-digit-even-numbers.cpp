class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int count=0;
        unordered_set<int>s;

        for(int i=0;i<digits.size();i++)
        {
            if(digits[i]%2==0)
            {
                for(int j=0;j<digits.size();j++)
                {
                    if(i!=j)
                    {
                        for(int k=0;k<digits.size();k++)
                        {
                            if(k!=j && k!=i && digits[k]!=0)
                            {
                                int sum=digits[i]+digits[j]*10+digits[k]*100;
                                if(s.count(sum)==0)
                                {
                                    s.insert(sum);
                                    count++;
                                }
                                else
                                continue;   
                            }                  
                        }
                    }
                }
            }
        }
        return count;
    }
};