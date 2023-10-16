class Solution {
public:

int LastOccurence(vector<int>&nums, int target){
      int n = nums.size();
      int low = 0;
      int high = n-1;
      int mid = 0;
      int res = -1;

      while(low<=high){
          mid = low + (high-low)/2;
          if(nums[mid]==target){
            res = mid;
            low = mid + 1;
          }else if(target<nums[mid]){
              high = mid-1;
          }else{
              low = mid+1;
          }
      }
      return res;
  }
    
  
  int FirstOccurence(vector<int>&nums, int target){
      int n = nums.size();
      int low = 0;
      int high = n-1;
      int mid = 0;
      int res = -1;

      while(low<=high){
          mid = low + (high-low)/2;
          if(nums[mid]==target){
            res = mid;
            high = mid - 1;
          }else if(target<nums[mid]){
              high = mid-1;
          }else{
              low = mid+1;
          }
      }
      return res;
  }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;

        v.push_back(FirstOccurence(nums,target));
        v.push_back(LastOccurence(nums,target));
       
        return v;
    }
};