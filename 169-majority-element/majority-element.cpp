class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1, ans = nums[0];

        for(int i = 1;i<nums.size();i++){
            if(count==0) ans = nums[i];
            if(ans == nums[i])++count;
            else --count;
        }
        
        return ans;
    }
};