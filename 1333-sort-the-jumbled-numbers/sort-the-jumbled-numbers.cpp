class Solution {
public:
    int covertValue(vector<int>& mapping, int num){
          string s = to_string(num);

          for(int i=0;i<s.size();i++){
           s[i] = mapping[int(s[i])-48] + '0';
          }
      
            return stoi(s);
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        
        sort(nums.begin(),nums.end(),[&](int a,int b){
              return covertValue(mapping,a) < covertValue(mapping,b);
        });
        return nums;
    }
};