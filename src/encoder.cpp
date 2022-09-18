#include "../include/encoder.hpp"

const std::unordered_map<char, std::string> MorseEncoder::DICT({
        {'a', ".-"},
        {'b', "-..."},
        {'c', "-.-."}
});

std::string MorseEncoder::CharToMorse(char c)
{
    auto it = DICT.find(c);

    if (it == DICT.end())
        throw BadChar();

    return it->second;
}

std::string MorseEncoder::StringToMorse(const std::string &input)
{
    std::string result;

    for (auto c : input) {
        if (c == ' ') {
            result.push_back(' ');
        }
        else {
            if (!result.empty() && result.back() != ' ')
                result.push_back(';');
            
            result.append(CharToMorse(c));
        }
    }

    return result;
}