#pragma once
#include <string>
#include <unordered_map>

class MorseEncoder {
public:
    static std::string CharToMorse(char c);
    static std::string StringToMorse(const std::string &);

    class BadChar : public std::exception {
    public:
        const char *what() const noexcept override {
            return "Bad character";
        }
    };
private:
    static const std::unordered_map<char, std::string> DICT;
};