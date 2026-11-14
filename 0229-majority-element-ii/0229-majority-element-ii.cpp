class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cand1=nums[0],cand2=nums[0];
        int cnt1=0,cnt2=0;
        for(int value:nums){
            if(value==cand1)
            cnt1++;
            else if(value==cand2)
            cnt2++;
            else if(cnt1==0){
                cand1=value;
                cnt1=1;
            }
            else if(cnt2==0){
                cand2=value;
                cnt2=1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        int ver1=0,ver2=0;
        for(int value:nums){
            if(value==cand1)
            ver1++;
            else if(value==cand2)
            ver2++;
        }
        int threshold=nums.size()/3;
        vector<int>ans;
        if(ver1>threshold)
        ans.push_back(cand1);
        if(cand2!=cand1 && ver2>threshold)
        ans.push_back(cand2);
        return ans;
    }
};