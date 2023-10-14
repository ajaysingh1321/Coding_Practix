class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xr = nums[0];
        int n = nums.size();

        for(int i = 1; i<n; i++){
            xr = xr^nums[i];
        }

        return xr;
    }
};