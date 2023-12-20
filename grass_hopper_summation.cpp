#include <iostream>

using namespace std;

int summation(int num)
{
    // Gauss' summation algorithm
    return num * 0.5 * (num + 1);
}

int main() {
    std::cout << summation(8) << std::endl; // should return 36
    return 0;
}