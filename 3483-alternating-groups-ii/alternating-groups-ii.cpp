class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int ans = 0;
        int count = 1;
        int last = colors[0];
        int n = colors.size();

        for(int i=1;i<n;i++){
             if(last == colors[i]){
                count = 1;
             }
             else {
                ++count;
             }

             last = colors[i];

             if(count>=k) ++ans;
        }


        for(int i=0;i<k-1;i++){
            if(last == colors[i]){
                count = 1;
             }
             else {
                ++count;
             }

             last = colors[i];

             if(count>=k) ++ans;
        }

        return ans;
    }
};