class Solution {
    public int findMin(int[] nums) {
        int left = 0;
        int right = nums.length-1;

        while(left <= right){
            int mid = (left+right)/2;

            if(mid>0 && nums[mid-1]>nums[mid]) return nums[mid];
            else if(nums[mid]<nums[0]) right = mid - 1;
            else left = left + 1;
        }

        return nums[0];
    }
}