// Longest Substring Without Repeating Characters
#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;
class solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int right = 0;
        int ans = 0;
        for (int left = 0; left < s.length(); left++) 
        {
            while (st.count(s[left])) 
            {
                st.erase(s[right]);
                right++;
            }
            st.insert(s[left]);
            ans = max(ans, left - right + 1);
        }
        return ans;
    }
};