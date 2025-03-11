class Solution {
public:
    int minimumRecolors(string blocks, int k) {
         int count = 0, ans = INT_MAX;

         for(int i=0;i<k;i++){
            if(blocks[i] == 'B') ++count;
         }
         ans = min(ans, k-count);
         for(int i=k;i<blocks.size();i++){
             if(blocks[i-k] == 'B' && blocks[i] == 'W') --count;
             if(blocks[i-k] == 'W' && blocks[i] == 'B') ++count;
             ans = min(ans, k-count);
         }
         return min(ans,k-count);
    }
};