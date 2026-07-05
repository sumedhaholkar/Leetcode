class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> digit;

    for (int i = 0; i < nums.size(); i++) {

        int x = nums[i];
        int mx = -1;
        int mn = 9;

        while (x != 0) {

            int rem = x % 10;

            mx = max(mx, rem);
            mn = min(mn, rem);

            x /= 10;
        }

        digit.push_back(mx - mn);
    }
     int maxRange = *max_element(digit.begin(), digit.end());
     int sum=0;
     for(int i=0;i<nums.size();i++){
        if(digit[i]==maxRange)
        sum+=nums[i];
     }
     return sum;
    }
};