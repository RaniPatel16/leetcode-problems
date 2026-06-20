class Solution {
public:
    int reverseNum(int num) {
        int rev = 0;

        while (num > 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }

        return rev;
    }

    bool isSameAfterReversals(int num) {
        int reversed1 = reverseNum(num);
        int reversed2 = reverseNum(reversed1);

        return reversed2 == num;
    }
};