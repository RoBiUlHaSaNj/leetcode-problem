class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> count(n, 0); 
        vector<int> result;
//num count than twice print 
   
        for (int num : nums) {
            count[num]++;
        }

      
        for (int i = 0; i < n; i++) {
            if (count[i] == 2) {
                result.push_back(i);
            }
        }

        return result;
    }
};
