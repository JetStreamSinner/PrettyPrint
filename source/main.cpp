#include "pretty_print.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> oneDim = {1, 2, 3};
    std::cout << "One dimensional vector: " << oneDim << std::endl;

    std::vector<std::vector<int>> twoDim = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::cout << "Two dimensional vector: " << twoDim << std::endl;

    std::map<std::string, int> mp = {
            {"hello", 123},
            {"hello2", 123},
            {"hello3", 123},
            {"hello4", 123}
    };
    std::unordered_map<int, int> ump;

    std::cout << mp << std::endl;
    std::cout << ump << std::endl;
    return 0;
}