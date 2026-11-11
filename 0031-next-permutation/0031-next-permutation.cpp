class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int pivot=n-2;
        while(pivot>=0 && nums[pivot]>=nums[pivot+1]){
            pivot--;
        }
        if(pivot<0){
            reverse(nums.begin(),nums.end());
            return;
        }
        int succ=n-1;
        while(nums[succ]<=nums[pivot]){
            succ--;
        }
        
        swap(nums[pivot],nums[succ]);
        reverse(nums.begin()+pivot+1,nums.end());
    }
};