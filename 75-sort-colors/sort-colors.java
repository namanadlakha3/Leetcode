

import static java.util.Collections.swap;

class Solution {
    public void sortColors(int[] nums) {
        int low=0,mid=0,high=nums.length-1;
        //0 to low-1 -> 0
        // low to mid-1 ->1
        //mid to high-1 -> unsorted
        //high to length-1 -> 2
        while(mid<=high){
            switch (nums[mid]) {
                case 0:
                    swap(nums,low,mid);
                    low++;mid++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums, mid, high);
                    high--;
                    break;
            
                default:
                    break;
            }
        }
    }
    public void swap(int[] nums ,int i,int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}