class Solution {
    public int findMin(int[] nums) {
        int left = 0;
        int right = nums.length-1;

        while(left <= right){
            int mid = (left+right)/2;

            if(mid>0 && nums[mid-1]>nums[mid]) return nums[mid];
            else if(mid>0 && nums[mid-1]<nums[0]) right = mid - 1;
            else left = left + 1;
        }

        return nums[0];
    }
}
// 1 2 3 4 5 6 7 0