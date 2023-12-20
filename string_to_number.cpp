#include <string>
#include <math.h>

using namespace std;

int string_to_number(const std::string &s)
{
    string abs = (s[0] == '-') ? s.substr(1, s.size()) : s;
    int n = abs.size();
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res += pow(10, i) * (abs[n - i - 1] - 48); // convert to ascii
    }

    return (s[0] == '-') ? -res : res;
}

int main()
{
    string_to_number("-321405"); // should return -321405 numerically
    return 0;
}