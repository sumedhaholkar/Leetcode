class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxlen=0;
        int lastfruit=-1,seclastfruit=-1;
        int currcount=0,lastfruitstr=0;
        for(int fruit:fruits){
            if(fruit==lastfruit || fruit==seclastfruit)
            currcount++;
            else currcount=lastfruitstr+1;
            if(fruit==lastfruit)
            lastfruitstr++;
            else{
                lastfruitstr=1;
                seclastfruit=lastfruit;
                lastfruit=fruit;
            }
            maxlen=max(maxlen,currcount);
        }
        return maxlen;

    }
};