#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

std::string rps(const std::string &p1, const std::string &p2)
{
    // if both choices are the same
    if (p1 == p2)
    {
        return "Draw!";
    }

    // hash map of what choice beats the other
    std::unordered_map<string, string> beats;
    beats.insert({"rock", "scissors"});
    beats.insert({"scissors", "paper"});
    beats.insert({"paper", "rock"});

    return (beats.find(p1)->second == p2) ? "Player 1 won!" : "Player 2 won!";
}

int main()
{
    std::cout << rps("rock", "scissors") << std::endl; // Player 1 wins!
    return 0;
}