class Solution {
public:
    int lengthOfLongestSubstring(string s) {

      //  look state forward just cheek one  by one if  duplicate find than it will be  break ;

unordered_set<char> c;//its  use for  store  value
    int left = 0;
    int maxLength = 0;
//   (c.find(s[right]) != c.end()   This checks if the char at the right pointer is already in the hash set (charSet). If it is
 //found in the set, it means this character is a duplicate within the current window.
//if a duplicate is found, the character at the left pointer is removed from the hash set. This is 
//because we're trying to eliminate the duplicate by shrinking the window from the left.

    for (int right = 0; right < s.length(); ++right) {

        while (c.find(s[right]) != c.end()) {
            c.erase(s[left]);
            ++left;
        }
//than after ensuring there are no duplicates, the character at the right pointer is added to the hash set. This includes the new character in the current window.
        c.insert(s[right]);
//calculates the current length of the window (substring) being considered
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;



    }
};
