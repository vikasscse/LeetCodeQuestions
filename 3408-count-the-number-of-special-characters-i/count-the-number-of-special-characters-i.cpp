class Solution {
public:
    int numberOfSpecialChars(string word) {
        int wordlower[26]={0};
        int wordupper[26]={0};
        int count=0;

        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='a' && word[i]<='z')
            {
                wordlower[word[i]-'a']++;
            }
            else
            {
                wordupper[word[i]-'A']++;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(wordlower[i]>0)
            {
                if(wordupper[i]>0)
                count++;
            }
            else continue;
        }
        return count;
    }
};