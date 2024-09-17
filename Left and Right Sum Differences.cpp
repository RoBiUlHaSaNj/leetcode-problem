class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n =nums.size();
        vector<int>ans;
       int left =0;
       int right=0;
       for(int i=0;i<n;i++) right+=nums[i];
//10 4 8 3 
//10 14 22  25
//right_sum =25

        for(int i=0;i<n;i++){
         //10 4 8 3
         //25 -10 =15= r  
         //15 pb{15}
         //ls 10
         //15-4 =11=r
         //11-ls(10)=1 pb{15  1 }
         //14
         //11-8=3 
         //14-3=11 pb{15 1 11}
         

      right-=nums[i];
      ans.push_back(abs(left-right));
       left+=nums[i];
        }
        return ans;
    }
};
