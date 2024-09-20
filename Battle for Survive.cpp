class Solution {
public:
    bool isPerfectSquare(int num) {
        int n = sqrt(num);
        if(num==n*n) return true;
        else return false;
      
      

    }
};/*
class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;  // Special case for 1
        int left = 1, right = num / 2;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;

            if (square == num) {
                return true;  // Found the perfect square
            } else if (square < num) {
                left = mid + 1;  // Search in the right half
            } else {
                right = mid - 1;  // Search in the left half
            }
        }

        return false;  // Not a perfect square
    }
};
*/
