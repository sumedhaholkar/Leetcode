class Solution {
public:
    int reverseDegree(string s) {
        int sum=0,i=1;
        for(char ch:s){
            int prod=1;
            int index='z'-ch+1;
            prod=index*i;
            i++;
            sum+=prod;
        }
        return sum;
    }
};