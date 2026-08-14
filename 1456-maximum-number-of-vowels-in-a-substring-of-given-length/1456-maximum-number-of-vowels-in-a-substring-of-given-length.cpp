class Solution {
public:
    bool isvowel(char ch){
        return (ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u');
    }
    int maxVowels(string s, int k) {
        int left=0;
        int vowelcount=0;
        int maxvowel=0;
        for(int right=0;right<s.length();right++){
            if(isvowel(s[right]))
            vowelcount++;
            if((right-left+1)>k){
                if(isvowel(s[left]))
                vowelcount--;
                left++;
            }
            if((right-left+1)==k)
            maxvowel=max(vowelcount,maxvowel);
        }
        return maxvowel;
    }
};