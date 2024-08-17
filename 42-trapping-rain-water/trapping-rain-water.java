
class Solution {
    public int trap(int[] height) {
        int n = height.length;
        int ans = 0;

        int[] leftMax = new int[n];
        int[] rightMax = new int[n];
        
        int lMax = -1;
        int rMax = -1;
        for(int i=0;i<n;i++){
          lMax = Math.max(lMax,height[i]);
          rMax = Math.max(rMax,height[n-1-i]);

          leftMax[i]=lMax;
          rightMax[n-1-i]=rMax;
        }

        for(int i=0;i<n;i++){
            ans+= Math.min(leftMax[i],rightMax[i]) - height[i];
        }

        return ans;
    }
}