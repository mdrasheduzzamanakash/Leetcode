class Solution {
public:
    int myAtoi(string name) {
        long long value=0;
    int i,j,sign=1;
        i=name.find_first_not_of(' ');
        if(name[i]=='-'||name[i]=='+')
            sign = (name[i++]=='-')?-1:1;
        while(name[i]>='0'&&name[i]<='9')
        {
            value = value*10 + (name[i++]-'0');
        if(value*sign<=INT_MIN)
            return (INT_MIN);
        if(value*sign>=INT_MAX)
            return (INT_MAX);
        }
        value = value*sign;

            return value;
        
    }
};