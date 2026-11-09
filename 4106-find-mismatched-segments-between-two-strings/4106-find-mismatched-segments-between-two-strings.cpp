class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>ans;
        int n=s1.size();
        int i=0;
        while(i<n){
            if(s1[i]==s2[i]){
                i++;
                continue;
            }
            int l=i;
            while(i<n && s1[i]!=s2[i]){
                i++;
            }
            string sb1=s1.substr(l,i-l);
            string sb2=s2.substr(l,i-l);
            ans.push_back({sb1,sb2});
        }
        return ans;
        
    }
};