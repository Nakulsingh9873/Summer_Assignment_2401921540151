// Decode String
#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;
        string current = "";
        int num = 0;
        for (char c : s) 
        {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }
            else if (c == '[') 
            {
                numStack.push(num);
                strStack.push(current);
                num = 0;
                current = "";
            }
            else if (c == ']') 
            {
                int repeat = numStack.top();
                numStack.pop();
                string previous = strStack.top();
                strStack.pop();
                while (repeat--) 
                {
                    previous += current;
                }
                current = previous;
            }
            else 
            {
                current += c;
            }
        }
        return current;
    }
};
