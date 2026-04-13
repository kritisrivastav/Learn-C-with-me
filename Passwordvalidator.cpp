#include "Passwordvalidator.h"

passwordValidator::passwordValidator(char restricted_character):restricted_symbol(restricted_character)
{}

passwordValidator::passwordValidator(std::vector<char> restrictedSymbolsVector):restricted_symbols_vector(restrictedSymbolsVector){}

bool passwordValidator::is_valid(std::string password)
{
    auto result =std::all_of(password.begin(), password.end(), [this](char character)
                {
                    return character != restricted_symbol;
                });

    return result;
}

bool passwordValidator::is_validForAVectorOfChars(std::string password)
{
    return std::all_of(password.begin(), password.end(),[this](char character)
                              {
        return std::none_of(restricted_symbols_vector.begin(), restricted_symbols_vector.end(),[character](char restrictedChar)
                     {
            return character == restrictedChar;
        });
    });
}

