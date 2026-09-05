class Solution {
public:
    string removeTrailingZeros(string num) {
       int k = 0;

    for (int i = num.length() - 1; i >= 0; i--) {
        if (num[i] == '0')
            k++;
        else
            break;
    }

    num.erase(num.length() - k, k);

    return num;
    }
};