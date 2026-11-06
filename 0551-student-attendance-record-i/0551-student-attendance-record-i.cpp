class Solution {
public:
    bool checkRecord(string s) {
        int late=0,absent=0;
        for(char ch:s){
            if(ch=='A')
            absent++;
            if(ch=='L')
            late++;
            else late=0;
            if((late>=3) || (absent>=2))
            return false;
        }
        return true;
    }
};