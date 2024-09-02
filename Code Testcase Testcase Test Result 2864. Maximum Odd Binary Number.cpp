class Solution {
public:
    string maximumOddBinaryNumber(string s) {
      int countOnes = 0;


    for (char c : s) {
        if (c == '1') {
            countOnes++;
        }
    }

    countOnes--;

    string result;


    for (int i = 0; i < countOnes; i++) {
        result += '1';
    }


    for (char c : s) {
        if (c == '0') {
            result += '0';
        }
    }


    result += '1';

    return result;
} 


    
};
