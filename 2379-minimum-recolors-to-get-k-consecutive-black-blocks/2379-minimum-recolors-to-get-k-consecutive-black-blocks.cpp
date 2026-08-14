class Solution {
public:
    int minimumRecolors(string blocks, int k) {
    int left = 0;
    int white = 0;
    int count = INT_MAX;
    for (int right = 0; right < blocks.length(); right++) {
        if (blocks[right] == 'W')
            white++;
        if (right - left + 1 > k) {
            if (blocks[left] == 'W')
                white--;
            left++;
        }
        if (right - left + 1 == k) {
            count = min(count, white);
        }
    }
    return count;
    }
};