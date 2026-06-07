// Move Zeroes
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>result;
        int n = nums.size();
        int a = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != 0)
            {
               nums[a] = nums[i];
               a++;
            }
        }
        while(a < n)
        {
            nums[a] = 0;
            a++;
        }
    }
};