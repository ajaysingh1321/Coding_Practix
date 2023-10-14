class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int ans = INT_MIN;
        int n = nums.size();

        for(int i = 0; i<n ; i++){
            if(nums[i]==1){
                maxi++;
            }else{
                maxi = 0;
            }
            ans = max(ans,maxi);
        }
        
        return ans;
    }
};