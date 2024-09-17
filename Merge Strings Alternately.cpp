class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        //i need to do take w1 from frist than w2 
        //w1=abc w2=rde
        //final=arbdce
      string result="";
      int i =0;
      while(i<w1.size()||i<w2.size()){

        if(i<w1.size()){
            result+=w1[i];
    
        }
        if(i<w2.size()){
            result+=w2[i];

        }
        i++;
      }
      return result;
    }
};
