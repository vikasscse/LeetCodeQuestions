class Solution {
public:
    int numberOfSpecialChars(string word) {
        int arrlower[26];
        int arrupper[26];

        for(int i=0;i<26;i++)
        {
            arrlower[i]=-1;
            arrupper[i]=-1;
        }
        int count=0;

        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='a' && word[i]<='z')
            arrlower[word[i]-'a']=i;

            else
            {
                if(arrupper[word[i]-'A'] != -1)
                continue;
                else
                arrupper[word[i]-'A']=i;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(arrlower[i]!=-1 && arrupper[i]!=-1 && arrlower[i]<arrupper[i])
            count++; 
        }
        return count;
    }
};