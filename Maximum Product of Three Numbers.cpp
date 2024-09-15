class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       /* 
       int maxProduct = numeric_limits<int>::min();
       for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    int product = nums[i] * nums[j] * nums[k];
                    maxProduct = max(maxProduct, product);
            }
        }
        return maxProduct;*/

         std::sort(nums.begin(), nums.end());
        
       
        int n = nums.size();
        int product1 = nums[n-1] * nums[n-2] * nums[n-3];  
        int product2 = nums[0] * nums[1] * nums[n-1];      
        
      
        return max(product1, product2);

    }
};
