class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = 0;
        int ans = 0;
        int i = 0; 
        int j = n-1;


       while(i<=j){
           area = min(height[j],height[i])*(j-i);

           ans = max(ans,area);

           if(height[j]<height[i]){
               j--;
           }else{
               i++;
           }
       }
       return ans;

    }
};