#include <math.h>
#include <iostream>

using namespace std;

bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
    return (mpg * fuel_left) >= distance_to_pump;
}

int main()
{
    std::cout << zero_fuel(50, 25, 2); // should return true
    return 0;
}