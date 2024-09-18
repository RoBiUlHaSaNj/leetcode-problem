class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1); // Initialize result array to [-1, -1]
        int n = nums.size();
        int l = 0, r = n - 1;

        //   find the leftmost
        while (r >= l) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                ans[0] = mid; 
                r = mid - 1;  // Continue left side
            } 
            else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        //  rightmost (last) occurrence
        l = 0;
        r = n - 1;

        // Second binary search to find the rightmost (last) occurrence
        while (r >= l) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                ans[1] = mid; 
                l = mid + 1;  // Continue right side
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        return ans;
    }
};
