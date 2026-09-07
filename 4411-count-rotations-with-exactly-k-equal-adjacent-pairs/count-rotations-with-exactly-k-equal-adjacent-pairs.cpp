class Solution {
public:
    int countRotations(string s, int k) {
      int total_count=0;
      int count;

      for(int i=0;i<s.size();i++)
      {
        count=0;
        for(int j=0;j<s.size()-1;j++)
        {
            if(s[(j+i)%s.size()]==s[(j+i+1)%s.size()])
            count++;
        }
        if(count==k)
        total_count++;
      }
      return total_count;  
    }
};