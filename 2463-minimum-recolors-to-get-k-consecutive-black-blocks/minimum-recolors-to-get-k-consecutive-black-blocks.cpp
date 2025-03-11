class Solution {
public:
    int minimumRecolors(string blocks, int k) {
         int n = blocks.size();
         queue<char>q;
         int count = 0, ans = INT_MAX;

         for(int i=0;i<k;i++){
           q.push(blocks[i]);
           if(blocks[i] == 'B') count++;
         } 

         ans = min(ans, k-count);

         for(int i=k;i<blocks.size();i++){
             if(q.front() == 'B' && blocks[i] == 'W') --count;
             if(q.front() == 'W' && blocks[i] == 'B') ++count;

             q.pop();
             q.push(blocks[i]);
             ans = min(ans, k-count);
         }
         cout<<blocks.size();
         return min(ans,k-count);
    }
};