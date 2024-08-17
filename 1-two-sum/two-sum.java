class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> mp = new HashMap();

        for(int i=0;i<nums.length;i++){
            int secondNumber = target - nums[i];

            if(mp.containsKey(secondNumber)){
                int secondNumberIndex = mp.get(secondNumber);
                 return new int[] {i, secondNumberIndex};
            }
            mp.put(nums[i],i);
        }


    return nums;
    }
}