#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

bool betterThanAverage(std::vector<int> classPoints, int yourPoints)
{
    classPoints.push_back(yourPoints);
    int classPointsSum = 0;

    for (size_t pointIndex = 0; pointIndex < classPoints.size(); pointIndex++)
    {
        classPointsSum += classPoints[pointIndex];
    }

    int classPointsAverage = classPointsSum / classPoints.size();
    return yourPoints > classPointsAverage ? true : false;
}

int main()
{
    std::cout << betterThanAverage({70, 70, 81, 85, 46}, 77) << std::endl; // should return true
    return 0;
}