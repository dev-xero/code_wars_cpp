#include <vector>
#include <iostream>

int positive_sum(const std::vector<int> arr)
{
    int sum = 0;
    for (auto num = arr.begin(); num != arr.end(); ++num)
    {
        if (*num > 0)
        {
            sum += *num;
        }
    }
    return sum;
}

int main()
{
    std::cout << positive_sum({1, 2, -8, 5, 2}) << std::endl; // should return 10
    return 0;
}
