class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int ans = 0;

        for(int i=2;i<colors.size();i++){
               if(colors[i] == colors[i-2] && colors[i]!=colors[i-1]) ++ans;
        }

        for(int i=colors.size()-2;i<colors.size();i++){
            if(colors[i] == colors[(i+2)%colors.size()] && colors[i]!=colors[(i+1)%colors.size()]) ++ans;
        }

        return ans;
    }
};