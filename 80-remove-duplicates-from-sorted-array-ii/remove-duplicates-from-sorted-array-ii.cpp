class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        int count = 0;

        for(int &num : nums){
            if(num == nums[i-1]){
                ++count;
                if(count == 2){
                    nums[i++] = num;
                }
            } 
            else {
                nums[i] = num;
                ++i;
                count = 1;
            }
        }
        return i;
    }
};