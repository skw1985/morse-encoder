#include <iostream>
#include "include/encoder.hpp"

int main()
{
    std::string str("ab c");
    std::cout << MorseEncoder::StringToMorse(str) << '\n';
}