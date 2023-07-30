#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

class Solution
{
public:
    std::vector<int> sortedSquares(std::vector<int> &nums)
    {
        for (auto itr = nums.begin(); itr != nums.end(); itr++)
        {
            *itr = pow(*itr, 2);
        }
        std::sort(nums.begin(), nums.end());
        return nums;
    }
};

int main()
{
    std::vector<int> myVector{-7, -3, 2, 3, 11};
    Solution mySolution;
    std::vector<int> mySecondVector = mySolution.sortedSquares(myVector);
    for (const auto &itr : mySecondVector)
    {
        std::cout << itr << " ";
    }
    return 0;
}