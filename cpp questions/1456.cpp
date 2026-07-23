#include <string>
#include <algorithm>

using std::string;
using std::max;

class Solution {
public:


    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }

    int maxVowels(const string& s, int k) {

        int left = 0;
        int right = k - 1;

        int count = 0;
        int ans = 0;

      
        for (int i = left; i <= right; i++) {
            if (isVowel(s[i])) {
                count++;
            }
        }

        ans = count;

      
        while (right < s.length() - 1) {

        
            if (isVowel(s[left])) {
                count--;
            }

            left++;
            right++;

            if (isVowel(s[right])) {
                count++;
            }

            ans = max(ans, count);
        }

        return ans;
    }
};