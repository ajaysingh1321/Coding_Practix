class Solution {
public:
    string frequencySort(string s) {
        int slen = s.size();
        string ans = "";
        map<char, int> mp;

        vector<pair<char, int>> vec;

        // Define a lambda function to compare by value
        auto compareByValue = [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second; // Sort in descending order of values
        };

        for (int i = 0; i < slen; i++) {
            mp[s[i]]++;
        }

        vec.assign(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), compareByValue);

        for (const auto& i : vec) {
            for (int j = 0; j < i.second; j++) {
                ans += i.first;
            }
        }
        return ans;
    }
};
