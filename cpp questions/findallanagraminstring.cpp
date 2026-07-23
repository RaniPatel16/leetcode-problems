#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;
        if (p.size() > s.size()) return ans;

        vector<int> pFreq(26, 0), sFreq(26, 0);

        for (int i = 0; i < p.size(); i++) {
            pFreq[p[i] - 'a']++;
            sFreq[s[i] - 'a']++;
        }

        if (pFreq == sFreq)
            ans.push_back(0);

        for (int i = p.size(); i < s.size(); i++) {

            sFreq[s[i - p.size()] - 'a']--;   
            sFreq[s[i] - 'a']++;
            if (pFreq == sFreq)
                ans.push_back(i - p.size() + 1);
        }

        return ans;
    }
};