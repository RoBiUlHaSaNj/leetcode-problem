class Solution {
public:
    char findTheDifference(string s, string t) {
       
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        
        int i = 0;
        while (i < s.size()) {
            if (s[i] != t[i]) {
                return t[i]; 
            }
            i++;
        }

        // If no mismatch was found, the last character in t is the extra one
        return t[i]; // This handles the case when t has one extra character at the end
    }
};
