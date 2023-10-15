class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        int threshold = n / 3;
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        for (const auto& x : mp) {
            if (x.second > threshold) {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};
