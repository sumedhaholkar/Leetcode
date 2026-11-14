class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>sur;
        for(int ast:asteroids){
            if(ast>0)
            sur.push_back(ast);
            else{
                int currsize=abs(ast);
                bool des=false;
                while(!sur.empty() && sur.back()>0){
                    int topsize=abs(sur.back());
                    if(topsize<currsize)
                    sur.pop_back();
                    else{
                        if(topsize==currsize){
                            sur.pop_back();
                        }
                        des=true;
                        break;
                    }
                }
                if(!des)
                sur.push_back(ast);
            }
        }
        return sur;
    }
};