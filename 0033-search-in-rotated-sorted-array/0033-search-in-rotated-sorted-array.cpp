class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0; 
        int high = nums.size()-1;
        int mid = 0;

        while(low<=high){
            mid = low + (high-low)/2;

            if(nums[mid]==target) return mid;

            //check wheather array is left sorted or right sorted
            
            //check if it is right sorted

            if(nums[mid]<=nums[high]){
                if(target>nums[mid] && target<=nums[high]){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }else if(nums[low]<=nums[mid]){//if it is left sorted
                if(target>=nums[low]&&target<nums[mid]){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }

        }
        return -1;
    }
};