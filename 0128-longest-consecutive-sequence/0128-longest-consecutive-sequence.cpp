class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>values(nums.begin(),nums.end());
        int longlen=0;
        for(int value:values){
            if(values.count(value-1))
            continue;
            int currlen=1;
            int nextval=value+1;
            while(values.count(nextval)){
                currlen++;
                nextval++;
            }
            longlen=max(longlen,currlen);
        }
        return longlen;
    }
};