class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int ans = 0;
        int mid = 0;

        int low = 1;
        int high = *max_element(piles.begin(),piles.end());

        while(low <= high){
            mid = low + (high - low) / 2;
            int count = 0;

            for(int i = 0; i < n; i++) {
               int full = piles[i]/mid;
               int partial  = piles[i]%mid;  // Calculate hours needed to eat piles[i]
               count = count + full;
               if(partial>0) count++;
                if(count > h) {
                    break;  // Exit the loop if count exceeds h
                }
            }

            if(count > h){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return low;  // Return low as the answer
    }
};
