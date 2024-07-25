class Solution {
public:
    void heapify(vector<int> &nums, int i, int n){
        int index = i;
        int left = 2*i + 1;
        int right = 2*i + 2;

        if(left<n && nums[left]>nums[index]) index = left;
        if(right<n && nums[right]>nums[index]) index = right;

        if(index!=i){
            swap(nums[i],nums[index]);
            heapify(nums,index,n);
        } 
    }

    vector<int> sortArray(vector<int>& nums) {
       int n = nums.size();

       // Build heap
       for(int i = n/2; i>=0;i--){
        heapify(nums,i,n);
       }

       for(int i=n-1;i>=0;i--){
        swap(nums[0],nums[i]);
        heapify(nums,0,i);
       }


       return nums;
    }
};