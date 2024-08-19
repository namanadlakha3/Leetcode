class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count = 0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='(')++count;
            else if(s[i] == ')' && count == 0) s[i]='.';
            else if(s[i] == ')' && count>0) --count;
        }

        for(int i=s.size()-1;i>=0;i--){
            if(count>0 && s[i]=='('){
                --count;
                s[i]='.';
            }
            if(count == 0) break;
        }
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]!='.')ans.push_back(s[i]);
        }

        
        return ans;
    }
};