class Solution {
public:
    int maxArea(vector<int>& height) {
      int l = 0;
        int r = height.size() - 1;
        int ans = 0;
        
        while (l < r) {
            
            int h = min(height[l], height[r]);
            
            
            int width = r - l;
            
           
            ans = max(ans, h * width);
            
            // Move the pointers inward
            if (height[l] > height[r]) {
                r--; 
            } else {
                l++; 
            }
        }
        
        return ans;
    }
};
