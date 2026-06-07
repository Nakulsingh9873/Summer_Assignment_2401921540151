// Squares of a Sorted Array
#include <iostream>
#include <vector>
#include <algorithm>    
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>result;
        for(int i : nums)
        {
            int a = i * i;
            result.push_back(a);
        }
        sort(result.begin(),result.end());
        return result;
    }
};