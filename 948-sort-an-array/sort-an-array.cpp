class Solution {
public:
    void heapify(vector<int> &nums, int i){
        int index = i;
        int left = 2*i + 1;
        int right = 2*i + 2;
        int n = nums.size();

        if(left<n && nums[left]>nums[index]) index = left;
        if(right<n && nums[right]>nums[index]) index = right;

        if(index!=i){
            swap(nums[i],nums[index]);
            heapify(nums,index);
        } 
    }

    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int>mp;

        int low=INT_MAX, high = INT_MIN;
        for(int &num: nums){
            mp[num]++;
            low = min(low,num);
            high = max(high,num);
        }
        
        int j = 0;
        for(int i = low;i<=high;i++){
            while(mp[i]!=0){
               nums[j++] = i;
               mp[i]--;
            }
        }

        return nums;

    }
};