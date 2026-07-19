class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(char ch:s){
            if(ch!='*'){
                st.push(ch);
            }
            if(st.empty()==false && ch=='*' ){
                st.pop();
            }
        }
 string ans;

    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;    }
};