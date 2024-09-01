class Solution {
public:
    string makeSmallestPalindrome(string s) {

    int n = s.length();
    int l = 0, r = n - 1;

    while (l < r) {
        if (s[l] != s[r]) {
          
            if (s[l] < s[r]) {
                s[r] = s[l];
            } else {
                s[l] = s[r];
            }
        }
        l++;
        r--;
    }

    return s;
}


};
