
class Solution {
    private int dynamicProgramming(int[] height){
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

    int twoPointer(int[] height){
          int left = 0, right = height.length - 1;
          int ans = 0, leftMax = 0, rightMax = 0;

          while(left < right){
             if(height[left]<height[right]){
                leftMax = Math.max(leftMax,height[left]);
                ans+= leftMax - height[left];
                ++left;
             }
             else {
                rightMax = Math.max(rightMax,height[right]);
                ans+= rightMax - height[right];
                --right;
             }
          }

          return ans; 
    }
    public int trap(int[] height) {
        return twoPointer(height);
    }
}