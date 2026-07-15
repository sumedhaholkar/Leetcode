class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd=0,sumeven=0,even=n,odd=n;
        for(int i=1;i<=n*2;i++){
            if(i%2==0)
            sumeven+=i;
            else
            sumodd+=i;
        }
        return gcd(sumeven,sumodd);
    }
};