#include <iostream>

int past(int h, int m, int s)
{
    // return the time since midnight in miliseconds
    return (h * 3600 + m * 60 + s) * 1000;
}

int main()
{
    std::cout << past(0, 1, 1) << std::endl; // should return 61000
    return 0;
}