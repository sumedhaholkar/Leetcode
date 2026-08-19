class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int left = 0;
        int subs = 0;
        int absdiff = 0;
        for (int right = 0; right < s.length(); right++) {
            absdiff += abs(s[right] - t[right]);
            while (absdiff > maxCost) {
                absdiff -= abs(s[left] - t[left]);
                left++;
            }
            subs = max(subs, right - left + 1);
        }
        return subs;
    }
};