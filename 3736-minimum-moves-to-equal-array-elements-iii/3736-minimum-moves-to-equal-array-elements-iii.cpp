class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,count=0,n=nums[nums.size()-1];
        for(i=0;i<nums.size();i++){
            while(nums[i]!=n){
                nums[i]=nums[i]+1;
                count++;
            }
        }
        return count;
    }
};