class Solution {
public:

    string longestPalindrome(string s) {
        
        if(s.empty())return"";
        string ans="";
        for(int i=0;i<s.size();i++){
 int l=i,r=i;
 //0ne
 while(l>=0 && r<s.size()&& s[l]==s[r]){


    if(r-l+1>ans.size()){
        ans=s.substr(l,r-l+1);
    }
    l--;
    r++;
 }
 //two
   l=i,r=i+1;
while(l>=0 && r<s.size()&& s[l]==s[r]){


    if(r-l+1>ans.size()){
        ans=s.substr(l,r-l+1);
    }
    l--;
    r++;
 }




        }
        return ans;
    }
};
