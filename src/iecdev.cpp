#include <string>
#include <vector>
#include <iostream>
#define foreach(key, arr) \
    for (const auto& key : arr) \


void printKeys(const std::vector<std::string>& keysarray)
{
    foreach(key, keysarray)
    {
        std::cout << key << std::endl;
    }
}

void Print(const std::string& A)
{
    std::cout << A << std::endl;
}

