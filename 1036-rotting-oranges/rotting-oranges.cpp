class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>> q;
        int mp[100][100] = {0};
        
        int ans = 0;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
               if(grid[i][j] == 2){
                   q.push({{i,j},0});
               }
            }
        }

        while(!q.empty()){
            int i = q.front().first.first;
            int j = q.front().first.second;
            int time = q.front().second;


            if(grid[i][j] == 1){
            ans = max(ans,time);

            }

            grid[i][j] = 2;

    

            if(i<grid.size()-1 && grid[i+1][j] == 1) q.push({{i+1,j},time+1}); 
            if(j<grid[0].size()-1 && grid[i][j+1] == 1) q.push({{i,j+1},time+1}); 
            if(i>0 && grid[i-1][j] == 1) q.push({{i-1,j},time+1}); 
            if(j>0 && grid[i][j-1] == 1) q.push({{i,j-1},time+1}); 
            
            q.pop();
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 1) return -1;
                
            }}
        return ans;
    }
};