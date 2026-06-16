class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cnt = 0,id = 0;
        for(int i = 0; i<s.size(); i++){
            for(int j = id; j<t.size();j++){
                if(s[i] == t[j]){
                    id = j+1;
                    cnt++;
                    break;
                }
            }
        }
        if(cnt == s.size()){
            return true;
        }
        return false;
        
    }
};