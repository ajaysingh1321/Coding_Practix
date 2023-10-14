class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }else{
                pos.push_back(nums[i]);
            }
        }
        int posin = 0;
        int negin = 0;
        for(int i = 0; i<n; i++){
            if(i%2==0){
              nums[i] = pos[posin];
              posin++;
            }else{
                nums[i] = neg[negin];
                negin++;
            }
        }

        return nums;

    }
};