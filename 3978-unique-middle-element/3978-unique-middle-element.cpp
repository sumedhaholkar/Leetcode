class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int hash[101]={0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int x=nums[nums.size()/2];
        if(hash[x]==1)
        return true;
        else return false;
    }
};