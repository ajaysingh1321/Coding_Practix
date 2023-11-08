class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes){
        map<int,vector<int>>mp;
        int n = groupSizes.size();
        for(int i  = 0; i<n; i++){
            mp[groupSizes[i]].push_back(i);
        }

        vector<vector<int>>ans;

        for(auto x : mp){
            int size = x.first;

            for(int i = 0; i<x.second.size(); i=i+size){
                vector<int>grp;
                for(int j = i; j<i+size;j++){
                    grp.push_back(x.second[j]);
                }

                ans.push_back(grp);
            }
        }

        return ans;

    }
};