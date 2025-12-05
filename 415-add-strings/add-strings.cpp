class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string str="";
        while(i>=0 && j>=0)
        {
            int number1=num1[i]-'0';
            int number2=num2[j]-'0';
            number1+=number2+carry;
            int bit=number1%10;
            carry=number1/10;
            char c=bit+'0';
            str+=c;
            i--;
            j--;
        }
        while(i>=0)
        {
            int number1=num1[i]-'0';
            number1+=carry;
            int bit=number1%10;
            carry=number1/10;
            char c=bit+'0';
            str+=c;
            i--;
        }
         while(j>=0)
        {
            int number1=num2[j]-'0';
            number1+=carry;
            int bit=number1%10;
            carry=number1/10;
            char c=bit+'0';
            str+=c;
            j--;
        }
        if(carry)
        {
            char c=carry+'0';
            str+=c;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};