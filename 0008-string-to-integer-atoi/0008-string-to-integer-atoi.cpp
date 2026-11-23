class Solution {
public:
    int myAtoi(string s) {
        int n=s.size(),i=0;
        long long result=0;
        while(i<n && s[i]==' '){
            ++i;
        }
        int sign=1;
        if(i<n && (s[i]=='+' || s[i]=='-')){
            if(s[i]=='-')
            sign=-1;
            ++i;
        }
        while(i<n && s[i]>='0' && s[i]<='9'){
            int digit=s[i]-'0';
            result=result*10+digit;
            ++i;
            long long signvalue=result*sign;
            if(signvalue>=INT_MAX)
            return INT_MAX;
            if(signvalue<=INT_MIN)
            return INT_MIN;
        }
        return result*sign;
    }
};