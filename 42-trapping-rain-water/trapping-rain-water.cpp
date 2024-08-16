class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int n = height.size();

        vector<int>leftMax;
        vector<int>rightMax(n);
        
        int curr = INT_MIN;
        for(int &i:height){
           curr = max(curr,i);
           leftMax.push_back(curr);
        }
        curr=INT_MIN;
        for(int i=n-1;i>=0;i--){
             curr = max(height[i],curr);
             rightMax[i] = curr;
        }

        for(int i=0;i<n;i++){
            ans+=min(rightMax[i],leftMax[i])-height[i];
        }
        return ans;
    }
};