class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int a = k % n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(), nums.begin()+a);
        reverse(nums.begin()+a,nums.end());

    }
};