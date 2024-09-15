class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum =0;
        mp[0]=-1;
        if(k==0)
        {
            for(size_t i=0;i<nums.size();i++){
                if(nums[i]==0 && nums[i+1]==0 ) return true;

            }
            return false;
        }


 for (size_t i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            int rem = sum % k;
            if(rem<0) rem+=k;

             if(mp.find(rem)!=mp.end()){
             if(i-mp[rem]>=2){
                 return true;

                 }
             }
    else
    {
        mp[rem]=i;
    }
}
return false;


 

    }
};
