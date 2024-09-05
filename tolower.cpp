class Solution {
public:
    string toLowerCase(string s) {
        for (auto& x : s) { 
        x = tolower(x); 
        //x=toupper(x)  uppcase  vlaue 
    } 
    return s;
    }
    
};
