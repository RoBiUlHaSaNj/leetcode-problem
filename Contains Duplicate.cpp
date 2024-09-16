class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {


       unordered_map <int ,int>map;
        for(auto i : nums){
            if(map.find(i)!=map.end())
           {
             return true;
        }
        map[i]++;
        }
        return false; 
    }
};
