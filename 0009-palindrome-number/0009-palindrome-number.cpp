class Solution {
public:
    bool isPalindrome(int x) {
        int rem;
        if(x<0)
        return 0;
        long long int s=0,m=x;
            while(x!=0)
            {
                rem=x%10;
                s=s*10+rem;
                x=x/10;
            }
            if(m==s)
            return 1;
            else 
            return 0;
    }
};