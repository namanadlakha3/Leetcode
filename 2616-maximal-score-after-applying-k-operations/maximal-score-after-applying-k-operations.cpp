class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int n = nums.size();
        long long score = 0;
  
        priority_queue<int>v;
        for(int &num:nums){
         v.push(num);
        }

        while(k--){
            int num = v.top();
            v.pop();
            //cout<<num<<","<<ceil(float(num)/3)<<endl;

            score+=num;
          
            v.push(ceil(double(num)/3));
        }
       return score;
        
    }
};