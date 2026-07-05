// Find All Anagrams in a String
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (p.size() > s.size())
            return ans;

        vector<int> pCount(26, 0);
        vector<int> windowCount(26, 0);

        // Count characters in p
        for (char c : p)
            pCount[c - 'a']++;

        int k = p.size();

        // First window
        for (int i = 0; i < k; i++)
            windowCount[s[i] - 'a']++;

        if (pCount == windowCount)
            ans.push_back(0);

        // Slide the window
        for (int i = k; i < s.size(); i++) {

            windowCount[s[i] - 'a']++;

            windowCount[s[i - k] - 'a']--;

            if (pCount == windowCount)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};
