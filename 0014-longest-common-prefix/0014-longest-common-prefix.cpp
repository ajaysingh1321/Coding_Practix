class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(),strs.end());
        string f = strs[0];
        string l = strs[n-1];
        string s = "";
        for(int i = 0; i<f.length(); i++){
            if(f[i]==l[i]){
                s += f[i];
            }else{
                break;
            }
        }
        return s;
    }
};