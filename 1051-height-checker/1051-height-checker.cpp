class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>space;
        for(int i=0;i<heights.size();i++){
            space.push_back(heights[i]);
        }
        sort(space.begin(),space.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=space[i])
            count++;
        }
        return count;
    }
};