class Solution {
public:
    bool isAnagram(string s, string t) {
        int slen = s.size();
        int tlen = t.size();
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        if(slen!=tlen) return false;

        for(int i = 0; i<slen; i++){
            mp1[s[i]]++;
        }
        for(int i = 0; i<tlen; i++){
            mp2[t[i]]++;
        }

        if(mp1==mp2){
            return true;
        }else{
            return false;
        }

    }
};