class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
       
        int count=0;
        int ans;

        if(ruleKey=="type")
            ans=0;
        else if(ruleKey=="color")
            ans=1;
        else if(ruleKey=="name")
            ans=2;

        for(int i=0;i<items.size();i++){
            if(items[i][ans]==ruleValue)
                count++;
        }
        return count; 
    }
};
