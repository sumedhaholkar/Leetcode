class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int brac=0;
        for(char ch:s){
            if(ch=='(') 
            brac++;
            else if (ch==')')
            brac--;
            ans=max(ans,brac);
        }
        return ans;
    }
};