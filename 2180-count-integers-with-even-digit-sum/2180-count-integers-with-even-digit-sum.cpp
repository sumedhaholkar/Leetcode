class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=2;i<=num;i++){
            int m=i,sum=0,rem=0;
            while(m!=0){
                rem=m%10;
                sum+=rem;
                m=m/10;
            }
            if(sum%2==0)
            count++;
        }
        return count;
    }
};