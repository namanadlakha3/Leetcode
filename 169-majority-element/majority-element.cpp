class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1, ans = nums[0], lastMx = 0;

        for(int i = 1;i<nums.size();i++){
            cout<<count;
               if(count==0){
                ans = nums[i];
               }

            if(ans == nums[i])++count;
            else --count;

 cout<<count<<endl;
            if(count==0){
                ans = nums[i];
               }
        }
        
        return ans;
    }
};