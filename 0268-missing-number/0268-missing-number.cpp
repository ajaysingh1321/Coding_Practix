class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;

        int sumArray = 0;

        for(int i = 0 ;i< n; i++){
            sumArray+=nums[i];
        }

        return sum-sumArray;
    }
};