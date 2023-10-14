class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zCount = 0;
        int n = nums.size();

        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==0) zCount++;
        }

        int i = 0;
        int j = 0; 
        while(j<n){
            if(nums[j]!=0){
                nums[i] = nums[j];
                i++;
            }
            j++;
        }

        for(int k = i ; k<n; k++){
            nums[k] = 0;
        }

    

    }
};