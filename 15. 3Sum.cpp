  vector<vector<int>> triplets; 
        int n = nums.size(); 
        
        // Sort the array to use two-pointer technique
        sort(nums.begin(), nums.end());

        // Loop through the array
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicates for the first element
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1, right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    triplets.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicates for the second element
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    // Skip duplicates for the third element
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;  // We need a larger sum
                } else {
                    right--;  // We need a smaller sum
                }
            }
        }
        return triplets;
