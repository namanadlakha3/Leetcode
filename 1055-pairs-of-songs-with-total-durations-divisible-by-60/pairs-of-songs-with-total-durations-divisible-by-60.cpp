class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>mp;
        int ans = 0;
        for(int &i : time){
            int num = i%60;
            if(num == 0) ans+=mp[num];
            else ans+=mp[60-num];

            mp[num]++;
        }
        return ans;
    }
};