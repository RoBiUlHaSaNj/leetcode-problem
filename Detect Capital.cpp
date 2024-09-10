class Solution {
public:
    bool detectCapitalUse(string s) {
     //frist word  cap
     //all upper
     //all lower


        int count=0;
        for(int i=0;i<s.length();i++){
            if(isupper(s[i])){
                count++;
            }
        }
        //cheek all  upp or all lower 
        if(count==s.length() || count==0) return true;
        //frist  word upper 
        if(count==1 && isupper(s[0])) return true;
        else return false;
  
   
