// 645. Set Mismatch
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        int n = nums.size();
        long long expected_sum = static_cast<long long>(n) * (n + 1) / 2;
        long long expected_sum_of_squares = static_cast<long long>(n) * (n + 1) * (2 * n + 1) / 6;

        long long actual_sum = accumulate(nums.begin(), nums.end(), 0LL);
        long long actual_sum_of_squares = 0LL;
        for (int num : nums)
        {
            actual_sum_of_squares += static_cast<long long>(num) * num;
        }

        long long sum_diff = actual_sum - expected_sum;                              // x - y
        long long square_sum_diff = actual_sum_of_squares - expected_sum_of_squares; // x^2 - y^2

        long long sum_plus = square_sum_diff / sum_diff; // x + y

        int x = (sum_diff + sum_plus) / 2;
        int y = sum_plus - x;

        return {x, y};
    }
};

int main()
{
    Solution s;
    vector<int> x = {1, 2, 2, 4};
    vector<int> res = s.findErrorNums(x);

    cout << res[0] << "    " << res[1];
}