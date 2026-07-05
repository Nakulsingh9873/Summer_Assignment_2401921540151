//  Repeated Substring Pattern
#include <iostream>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for (int i = 1; i <= n / 2; i++) 
        {
            if (n % i != 0)
                continue;
            string part = s.substr(0, i);
            string temp = "";
            while (temp.length() < n)
            {
                temp += part;
            }
            if (temp == s)
                return true;
        }
        return false;
    }
};