class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count = 0;

        int left = 0, right = nums.size()-1, n = nums.size();
        if(n==1) return nums[0]==0 ? 0 : 1;
        while(left<=right){
            int mid = (left+right)/2;


            if(nums[mid]<0){
                left = mid+1;
                count = max(count, mid+1);
            }
            else if(nums[mid]>0){
                  right = mid-1;
                  count = max(count, n-mid);
            }
            else {
                if(mid>=n/2) {
                    right = mid-1;
                }
                else {
                  left = mid+1;
                } 
            }
        }


        return count;
        
    }
};