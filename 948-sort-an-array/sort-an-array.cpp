class Solution {
public:
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