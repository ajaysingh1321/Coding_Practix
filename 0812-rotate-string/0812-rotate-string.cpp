class Solution {
public:
    bool rotateString(string s, string goal) {
        int slen = s.size();
        int glen = goal.size();

        if(slen!=glen) return false;
        string ans = s+s;

        if(ans.find(goal)==-1){
            return false;
        }else{
            return true;
        }
    }
};