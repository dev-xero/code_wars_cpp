#include <math.h>
#include <iostream>

using namespace std;

int quarter_of(int month)
{
    return ceil(month / 3.0);
}

int main()
{
    std::cout << quarter_of(5) << std::endl; // should return 1
    return 0;
}