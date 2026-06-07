// Reverse String
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>result;
        int n = s.size();
        int a ;
        for(a = n-1; a >= 0; a--)
        {
            result.push_back(s[a]);
        }
        s = result;
    }
};