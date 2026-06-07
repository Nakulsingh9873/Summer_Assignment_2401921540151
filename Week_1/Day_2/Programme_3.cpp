// Maximum Average Subarray I
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        long long sum = 0;
        for (int i = 0; i < k; ++i)
            sum += nums[i];

        long long maxSum = sum;

        for (int i = k; i < n; ++i) {
            sum += nums[i];
            sum -= nums[i - k];

            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }

        return (double)maxSum / k;
    }
};
