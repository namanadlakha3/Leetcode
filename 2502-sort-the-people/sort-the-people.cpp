class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>>v;
        for(int i=0;i<names.size();i++){
             v.push_back({names[i],heights[i]});
        }

        sort(v.begin(),v.end(),[&](pair<string,int>a, pair<string,int>b){
            return a.second>b.second;
        });

        for(int i=0;i<names.size();i++){
             names[i] = v[i].first;
        }

        return names;
    }
};